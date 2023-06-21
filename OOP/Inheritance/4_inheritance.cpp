#include <iostream>
using namespace std;
//multiple inheritance - a child class when inherited from multiple parent classes shows multiple inheritance

//parent1
class Animal{
    public:
    void eat(){
        cout << "Eat " << endl;
    }
    void walk(){
        cout << "Animal Walking " << endl;
    }
};

//parent2
class Bird{
    public:
    void wings(){
        cout << "wings " << endl;
    }

    void walk(){
        cout << "Bird Walking " << endl;
    }
};

class Penguine : public Animal, public Bird{
    void movement(){
        eat();
        wings();
        Bird::walk();
    }
};

int main(){
    Penguine p1;
}