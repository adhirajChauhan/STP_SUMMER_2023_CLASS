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

void deletionAtHead(Node* &head){
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}

void deletion(Node* &head, int val){
    Node* temp = head;

    if(head == NULL){
        return;
    }

    if(head->next == NULL){
        deletionAtHead(head);
        return;
    }

    while(temp->next->data != val){
        temp= temp->next;
    }

    Node* toDelete = temp->next;

    //changing the pointer from n-1 to n+1
    temp->next = temp->next->next;

    delete toDelete;
}

bool search(Node* head, int key){
    Node* temp = head;

    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }

    return false;
}

bool isCircular(Node* head){
    if(head == NULL){
        return false;
    }

    Node* temp = head->next;

    while(temp!= NULL && temp!=head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }
    return false;
}

Node* reverse(Node* &head){
    Node* prev =  NULL;
    Node* curr = head;
    Node* next; 

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev; //new head
}

Node* kReverse(Node* &head, int k){
    //base case
    if(head == NULL){
        return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    while(curr!=NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr=next;
        count++;
    }

    if(next!=NULL){
        head->next = kReverse(next,k);
    }

    return prev;
}

int main(){
    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);

    display(head);

    // deletion(head, 3);

    // display(head);

    // deletionAtHead(head);

    // cout << search(head, 44);

    // if(isCircular(head)){
    //     cout << "Circular" << endl;
    // }
    // else{
    //     cout << "Not circular" << endl;
    // }

    Node* newHead = reverse(head);
    display(newHead);

}