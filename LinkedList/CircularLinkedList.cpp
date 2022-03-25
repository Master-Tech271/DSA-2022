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

    ~Node(){
        // cout<<endl<<"delete data : " << this-> data <<endl;
    }
};

void insertAtBeg(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail = temp;
    temp->next = tail;
    return;
}

void insertAtPos(Node *&tail, int data, int pos)
{
    if (tail == NULL)
    {
        insertAtBeg(tail, data);
        return;
    }
    else if(pos == 1){
        Node* insertNode = new Node(data);
        insertNode->next = tail -> next;
        tail -> next = insertNode;
        return;
    }
    // assuming position exist
    int count = 1;
    Node *prev = tail->next;
    while (count < (pos - 1))
    {
        prev = prev->next;
        count++;
    }

    Node *insertNode = new Node(data);
    // when adding 2nd element
    if (prev == tail && tail->next == prev)
    {
        // update tail
        tail = insertNode;
        insertNode->next = prev;
        prev->next = insertNode;
    }
    // when adding at the end
    else if (prev == tail)
    {
        insertNode->next = tail->next;
        tail = insertNode;
        prev->next = insertNode;
    }
    // when adding at middle
    else
    {
        insertNode->next = prev->next;
        prev->next = insertNode;
    }
}

void traverse(Node *tail)
{
    if (tail == NULL)
    {
        cout<< "Empty List" << endl;
        return;
    }
    Node *start = tail->next;
    int flag = 0;

    if (start != tail)
    {
        flag = 1; // for traverse the tail after the end of this loop!
    }
    do
    {
        cout << start->data << " ";
        start = start->next;
    } while (start != tail);
    if (flag == 1)
    {
        cout << start->data << " ";
    }
}

//we can delete according to data and assuming data exist
void deleteNode(Node* &tail, int data){
    if(tail == NULL) {return;}
    //when only 1 element in list
    if(tail -> data == data && tail -> next == tail){
        tail -> next = NULL;
        delete tail;
        tail = NULL; //because memory is released but tail also store the memory address
        return;
    }
    Node* curr = tail -> next;
    Node* prev = NULL;
    while(curr -> data != data){
        prev = curr;
        curr = curr -> next; 
    }
        //first element delete
    if(prev == NULL && curr -> data == data){
        tail -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
    // delete last element
    else if(curr == tail) {
        prev -> next = tail -> next;
        tail = prev;
        curr -> next = NULL;
        delete curr;
    }
    else{
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        }
}

int main()
{
    Node *tail = NULL;
    insertAtPos(tail, 10, 1);
    insertAtPos(tail, 11, 2);
    insertAtPos(tail, 12, 3);
    insertAtPos(tail, 13, 4);
    insertAtPos(tail, 14, 4);
    insertAtPos(tail, 15, 1);
    traverse(tail);
    cout<<endl;
    deleteNode(tail, 10);
    traverse(tail);
    cout<<endl;
    deleteNode(tail, 15);
    traverse(tail);
    cout<<endl;
    deleteNode(tail, 13);
    traverse(tail);
    cout<<endl;
    deleteNode(tail, 12);
    traverse(tail);
    cout<<endl;
    deleteNode(tail, 11);
    traverse(tail);
    cout<<endl;
    deleteNode(tail, 14);
    traverse(tail);
    return 0;
}