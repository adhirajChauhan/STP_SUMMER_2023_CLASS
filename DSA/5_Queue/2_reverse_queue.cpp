#include <iostream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

queue<int> rev(queue<int> q){
    //create a stack
    stack<int> s;

    //pop all elements from queue and push in the stack
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    //pop all the elements from the stack and put it in the queue
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    //retrun queue
    return q;
}

queue<int> modiftQueue(queue<int> q, int k){
    //create a stack

    //pop k elements from q and push in stack

    //pop elements from stack and push in q

    //fetch first(n-k) elements from queue and push back

}

string firstNonRepeating(string A){
    unordered_map<char, int> count;
    queue<int> q;
    string ans = "";
    for(int i = 0; i , A.length(); i++){
        char ch = A[i];
        count[ch]++;

        q.push(ch);

        while(!q.empty()){
            if(count[q.front()] > 1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
}
int main(){

}