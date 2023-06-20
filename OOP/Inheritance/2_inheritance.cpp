#include <iostream>
using namespace std;

//Single Inheritance
//one parent and one child class

class A{

    int x;

    protected:
    int y;

    public:
    void ABC(){

    }
};

class B : private A{
    public:
    void XYZ(){

    }
};

int main(){

}