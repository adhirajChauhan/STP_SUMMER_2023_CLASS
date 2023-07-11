#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

//Insert At Tail
void insertAtTail(Node* &head, int val){
    Node *n = new Node(val);

    if(head==NULL){
        head = n;
        return;
    }

    Node* temp = head;

    //keep iterating until next of temp is NULL

    while(temp->next != NULL){
        temp = temp->next;
    }

    //at the end after iterating the loop
    temp->next = n;
}

//insert at head
void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    n->next = head;
    head = n;
}

//display
void display(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

bool search(Node* head, int key){
    
}

int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);

    insertAtHead(head, 10);
    insertAtHead(head, 20);


    display(head);

}