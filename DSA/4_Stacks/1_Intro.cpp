#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    int topElement = s.top();
    cout << "On top of stack we have " << topElement << endl;
    s.pop();

    cout << "Size of stack " << s.size() << endl;

    cout << "Top element in stack gives -> " << s.top() << endl;

}