#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;


class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int data)
		{
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}
};

Node* buildTree(Node* node)
{
	int data;
	cout<<"Enter data -: ";
	cin>>data;
	if(data == -1)
		return NULL;
	node = new Node(data);
	cout<<"Enter data for left child" << endl;
	node->left = buildTree(node->left);
	cout<<"Enter data for right child"<<endl;
	node->right = buildTree(node->right);
	return node;
}

void levelOrderTraversal(Node* root)
{
    if(root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

int main() {
	// 3 5 4 1 -1 -1 -1 3 2 -1 -1 -1 6 -1 -1
	Node* node;
	node = buildTree(node);
    cout<<endl;
    levelOrderTraversal(node);
	return 0;
}