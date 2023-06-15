#include <iostream>
using namespace std;

void name(string myName = "Dummy"){
    cout << "The name is : " << myName << endl;
}

int sum(int num1, int num2){
    int ans = num1 + num2;
    return ans;
}

//method with same name but different parameters
int sum(int num1, int num2, int num3){
    float ans = num1+ num2+num3;
    return ans;
}


int  main(){

    name("John");

    //That sum function will be called whose signature is matching with the function
    cout <<"The sum1 is : " << sum(2,3) << endl;
    cout <<"The sum2 is : " << sum(5,11,3) << endl;


}