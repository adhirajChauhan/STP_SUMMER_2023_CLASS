#include <iostream>
using namespace std;

void func(){
    cout << "this is my function"<< endl;
}

void func2(){
    cout << "func2 top statement " << endl;

    func();

    cout << "func2 bottom statement " << endl;


}

int main(){

    ///functions

    cout << "Before func called " << endl;

    func2();

    cout << "After func called " << endl;


    // int a, b;

    // cin >> a >> b;

    // int sum = a + b;
    // cout << sum << endl;

    // int c, d;

    // cin >> c >> d;

    // int sum1 = c + d;
    // cout << sum1 << endl;

    //DRY - (Do not repeat yourself)

}