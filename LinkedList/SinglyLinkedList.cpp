#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        // memory free
        cout<< "Memmory free of -: " << this->data;
    }
};

//delete node
void deleteNode(Node* &head, int pos){
    Node* temp = head;
    if(pos == 1){
        head = head->next;
        temp -> next = NULL;
        delete temp;
    } else{
        int count = 1;
        Node* prev = NULL;
        Node* curr = temp;
        while(count < pos && curr->next != NULL){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        if(curr != NULL){
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
        }
    }
}

// insert at beginning or start
void insertAtBeg(Node *&head, int data)
{
    Node *node = new Node(data);
    node->next = head;
    head = node;
}

// insert at middle or last position
void insertAtPos(Node *&head, int data, int pos)
{
    if (pos < 1)
    {
        return;
    }
    if (pos == 1)
    {
        // insert at beg
        insertAtBeg(head, data);
        return;
    }
    int count = 1;
    Node *temp = head;
    while (count < (pos - 1))
    {
        temp = temp -> next;
        count++;
    }
    if (temp != NULL)
    {
        // insert
        Node *insertNode = new Node(data);
        insertNode->next = temp->next;
        temp->next = insertNode;
    }
}

//insert at last
void insertAtLast(Node* &head, int data){
    if(head == NULL){
        //insert at beg
        insertAtBeg(head, data);
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp ->next;
    }
    //now head point to end element
    Node * node = new Node(data);
    node->next = NULL;
    temp->next = node;
}

// traverse
void traverse(Node *&head)
{
    Node *temp = head;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << endl;
}

int main()
{
    Node *Head = NULL;
    insertAtBeg(Head, 10);
    insertAtBeg(Head, 15);
    insertAtBeg(Head, 18);
    insertAtBeg(Head, 1);
    insertAtPos(Head, 12, 1);
    traverse(Head);
    deleteNode(Head, 1);
    traverse(Head);
    deleteNode(Head, 4);
    traverse(Head);
    deleteNode(Head, 2);
    traverse(Head);
    insertAtLast(Head, 1);
    insertAtLast(Head, 2);
    insertAtLast(Head, 3);
    traverse(Head);
    return 0;
}