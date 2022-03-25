#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int data){
            this -> data = data;
            this -> prev = NULL;
            this -> next = NULL;
        }

};

void insertAtBeg(Node* &head, int data){
    Node* node = new Node(data);
    if(head != NULL){
        node -> next = head;
        head -> prev = node;
    }
    head = node;
}

void insertAtPos(Node* &head, int pos, int data){
    if(pos == 1){
        insertAtBeg(head, data);
        return;
    }
    int count = 1;
    Node* temp = head;
    while(count < (pos - 1)){
        temp = temp->next;
        count++;
    }
    if(temp != NULL){
        Node* node = new Node(data);
        node -> prev = temp;
        node -> next = temp -> next;
        if(temp -> next != NULL){
            temp -> next -> prev = node;
        }
        temp -> next = node;
    }
}

void insertAtLast(Node* &head, int data){
    if(head == NULL){
        insertAtBeg(head, data);
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    Node* node = new Node(data);
    node -> prev = temp;
    temp -> next = node;
}

//deleteNodeAtHead
void deleteNodeAtHead(Node* &head){
    if(head == NULL) {return;}
    Node *temp = head;
    head = temp -> next;
    temp -> next = NULL;
    temp -> prev = NULL;
    delete temp;
    return;
}
//DELETE
void deleteNode(Node* &head, int pos){
    if(head == NULL) {return;}
    if(pos == 1){
        deleteNodeAtHead(head);
        return;
    }
    int count = 1;
    Node* curr = head;
    Node* prev = NULL;
    while(count < pos){
        prev = curr;
        curr = curr -> next;
        count++;
    }
    if(curr -> next != NULL){
        prev -> next = curr -> next;
        curr -> next -> prev = curr -> prev;
    } else{
        prev -> next = NULL;
    }
    curr -> next = NULL;
    curr -> prev = NULL;
    delete curr;
    return;
}

//traverse
void traverse(Node* head){
    cout<<endl;
    while(head != NULL){
        cout<< head->data << " ";
        head = head -> next;
    }
    cout<<endl<<endl;
}

int main() {
    Node* Head = NULL;
    insertAtBeg(Head, 10);
    insertAtBeg(Head, 20);
    insertAtBeg(Head, 30);
    traverse(Head);
    insertAtPos(Head, 2, 15);
    traverse(Head);
    insertAtLast(Head, 25);
    insertAtLast(Head, 26);
    insertAtLast(Head, 27);
    traverse(Head);
    deleteNode(Head, 1);
    traverse(Head);
    deleteNode(Head, 3);
    traverse(Head);
    deleteNode(Head, 2);
    traverse(Head);
    deleteNode(Head, 4);
    traverse(Head);
    return 0;
}