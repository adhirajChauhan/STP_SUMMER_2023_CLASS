#include <iostream>
#include<map>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

//insert At head
void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;

}

//insert at tail
void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void deleteAtHead(Node* &head){
    Node* temp = head;

    while(temp->next != head){
        temp= temp->next;
    }

    Node* toDelete = head;
    temp->next = head->next;
    head = head->next;
    delete toDelete;
}

void deletion(Node* &head, int pos){

    if(pos==1){
        deleteAtHead(head);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count != pos - 1){
        temp=temp->next;
        count++;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

void display(Node* head){

    Node* temp = head;
    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    } while(temp!=head);

    cout << "NULL" << endl;
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

bool detectLoop(Node* head){

    if(head == NULL){
        return false;
    }

    map<Node*,bool> visited;
    Node* temp = head;

    while(temp!=NULL){
        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp=temp->next;
    }

    return false;
}

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast) return slow;
    }

    return NULL;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    // display(head);
    insertAtHead(head, 6);
    display(head);

    // deletion(head, 4);
    // display(head);

    // if(isCircular(head)){
    //     cout << "Circular" << endl;
    // }
    // else{
    //     cout << "Not circular" << endl;
    // }

}


//determine if the given LL is circular or not