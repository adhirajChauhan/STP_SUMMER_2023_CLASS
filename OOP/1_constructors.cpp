#include <iostream>
using namespace std;

class Student{
    public:
    int age;
    string name;

    //default constructor
    Student(){
        cout << "Constructor invoked " << endl;
    }

    Student(int _age, string _name){
        age = _age;
        name = _name;
    }

    Student(int myAge){
        age = myAge;
    }

    Student(Student &obj){
        age = obj.age;
    }

    ~Student(){
        cout << "Destructor Invoked " << endl;
    }
};

int main()
{
    Student s1;
    Student s2;

    Student s3(11,"John");
    cout << s3.age << endl;

    Student s4(20);
    cout << s4.age << endl;

    Student s5(s3);
    cout << "s5 " << s5.age << endl;
}