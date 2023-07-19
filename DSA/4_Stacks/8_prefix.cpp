#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prefixEval(string s){
    stack<int> st;

    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] - '0'); //conversion to int
        }

        else{
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();


            switch(s[i]){
                case '+':
                    st.push(operand1+operand2);
                    break;

                case '-':
                    st.push(operand1-operand2);
                    break;
                case '*':
                    st.push(operand1*operand2);
                    break;
                case '/':
                    st.push(operand1/operand2);
                    break;
                case '^':
                    st.push(pow(operand1,operand2));
            }
        }
    }

    return st.top();

}

int main(){

    //"-+7*45+20"

    cout << prefixEval("-+7*45+20") << endl; 
}