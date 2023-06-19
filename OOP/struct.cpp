#include <iostream>
using namespace std;

struct Person{
    string hairColor;
    int age;
    string tshirtColor;

    int fly(){
        cout << "Fly";
    }
};

int main(){

    Person person1;
    person1.age = 22;
    person1.hairColor = "White";
    person1.tshirtColor = "Black";
    person1.fly();

    Person person2;
    person2.age = 30;
    person2.hairColor = "Brown";
    person2.tshirtColor = "White";

    // struct{
    //     int num;
    //     string name;
    // } myStruct, myStruct1, myStruct2;

    // myStruct.name = "Hello";
    // myStruct.num = 1;

    // myStruct1.name = "Hi";
    // myStruct1.num = 2;

    // cout << myStruct.name << endl;
    // cout << myStruct.num << endl;
    // cout << myStruct1.name << endl;
    // cout << myStruct1.num << endl;


}