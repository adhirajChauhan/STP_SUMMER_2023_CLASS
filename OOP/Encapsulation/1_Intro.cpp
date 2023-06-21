#include <iostream>
using namespace std;

//Encapsulation - binding together the data and function that manipulate them 
//getters setters

//Features
//1.We cannot access any function from the class directly
//2. increases the security of data
//3. It helps to control modification of data members

class Employee{
    private:
    int salary;

    public:

    void setSalary(int value)
    {
        salary = value;
    }
    int getSalary(){
        return salary;
    }
};

int main(){
    Employee e1;
    e1.setSalary(700);

    cout << e1.showSalary() << endl;
}