#include <iostream>
using namespace std;

//multilevel inheritance
class Animal{
    public:
    void eat(){
        cout << "Eating " << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Bark " << endl;
    }
};

class BabyDog : public Dog{
    public:
    void weep(){
        cout << "Weeping " << endl;
    }
};

int main(){
    BabyDog b1;

    b1.eat();
    b1.bark();
    b1.weep();

    Dog dog1;

}