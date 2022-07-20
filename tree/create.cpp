#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter data -: " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new Node(data);
    cout << "Enter data for left child" << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for right child" << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout<<endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

void inorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root)
{
    if(root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data << " ";
}

void preorderTraversal(Node* root)
{
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main()
{
    Node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 37 -1 -1 -1
    root = buildTree(root);
    cout << "Level Order Traversal" << endl;
    levelOrderTraversal(root);
    cout << "InOrder Traversal" << endl;
    //LNR
    inorderTraversal(root);
    //LRN
    cout << endl << "Posteorder Traversal" << endl;
    postorderTraversal(root);
    //NLR
    cout << endl << "PreOrder Traversal" << endl;
    preorderTraversal(root);
    return 0;
}