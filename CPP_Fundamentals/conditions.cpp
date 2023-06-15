#include <iostream>
using namespace std;

int main(){
    //if(condition){
        //body
    //}
    // int x = 5;

    // if(x > 10){
    //     cout << "Yes";
    // }
    // else{
    //     cout << "No";
    // }


    //write a program to ask for the age of the user
    //based on the age cout if he can vote or not
    //NOTE : voting age is 18

    int age = 20; //child, teenager, adult

    //age 0 > and < 12 -> child
    // age >= 12 and < 18 -> teen
    //age >= 18 -> adult

    //IF_ELSE
    // if(age > 0 && age < 12){
    //     cout << "User is a child ";
    // }
    // else if(age >= 12 && age < 18){
    //     cout << "User is a teenager";
    // }
    // else{
    //     cout << "User is an adult";
    // }
    

    //SWITCH CASE

    switch(age){

        case 10:
        cout << "Age is 10";
        break;

        case 20:
        cout << "Age is 20";
        break;

        case 30:
        cout << "Age is 30";
        break;

        default:
        cout << "Invalid age";
        break;

    }
}