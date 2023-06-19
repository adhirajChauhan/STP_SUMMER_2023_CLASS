#include <iostream>
using namespace std;

class myClass{
    private:
    int x;
    string y;

    public:
    int a;
    string b;

    void myFunc(){
        cout << "Function of MyClass " << endl;
    }

    int add(int num1, int num2){
        int ans = num1 + num2;
        return ans;
    }
};

int main(){

    myClass class1;
    myClass class2;
    class1.myFunc();

    cout << class1.add(2,3) << endl;
    cout << class2.add(4,3) << endl;


}