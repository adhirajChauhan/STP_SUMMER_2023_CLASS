#include <iostream>
using namespace std;

class Queue{
    int* arr;
    int front;
    int back;
    int size;

    public:
    Queue(){
        size = 10000;
        arr = new int[size];
        front = -1;
        back = -1;
    }

    void push(int x){

        if(back == size-1){
            cout << "Queue Overflow " ;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }

    void pop(){

        if(front == -1){
            cout << "No elements to pop";
            return;
        }

        front++;
    }

    int peek(){
        if(front == -1){
            cout << "No elements in the queue";
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front == -1){
            return true;
        }
        return false;
    }

};

int main(){
    Queue q;

    q.push(1);
    q.push(2);


    q.pop();
    cout << q.peek();
}