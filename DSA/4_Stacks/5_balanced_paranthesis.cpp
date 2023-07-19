#include <iostream>
#include<stack>
using namespace std;

bool isValid(string s){
    int n = s.size();
    stack<char> st;

    bool ans = true;
    for(int i  = 0; i < n; i++){

        if(s[i] == '{' ||s[i] == '(' || s[i] == '['){
            st.push(s[i]);
        }
        
        else if(s[i] == ')'){
            if(!s.empty() && st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }

        }

        else if(s[i] == '}'){
            if(!s.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }

        }
        else if(s[i] == ']'){
            if(!s.empty() && st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }

        }
    }

    if(!st.empty()){
        return false;
    }
    return true;
}

int main(){
    string s = "[](";

    if(isValid(s)){
        cout << "Valid" << endl;
    }

    else{
        cout << "Not valid" << endl;
    }
}