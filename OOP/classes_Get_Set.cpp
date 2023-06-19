#include <iostream>
using namespace std;

class Student{
    private:
    int password = 1234;

    public:
    int rollNo;
    string name;

    void print(int x){
        cout << "Print the value : " << x << endl;
    }

    //Getters
    int getPassword(){
        return password;
    }

    //setters
    void setPassword(int input){
        password = input;
    }


};

int main(){
    Student s1, s2;
    s1.name = "John";
    cout << s1.name << endl;
    s2.name = "Danny";
    cout << s2.name << endl;


    cout << "Old password is : " <<s1.getPassword() << endl;

    s1.setPassword(9876);

    cout << "New password is : " <<s1.getPassword() << endl;

}