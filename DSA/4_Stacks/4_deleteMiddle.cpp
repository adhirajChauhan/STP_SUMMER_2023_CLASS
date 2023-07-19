#include <iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int> &inputStack, int count, int size){
        //base case
        if(inputStack.empty() || count == size/2 - 1){
            inputStack.pop();
            return;
        }

        int num  = inputStack.top();
        inputStack.pop();

        //recursive call
        deleteMiddle(inputStack,count+1, size);

        inputStack.push(num);
}

int main(){

}