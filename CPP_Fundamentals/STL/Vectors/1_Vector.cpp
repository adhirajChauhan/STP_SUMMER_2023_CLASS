#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> num  = {1,2,3,4,5};

    //Add-----------------------------------
    num.push_back(6);
    num.push_back(7);

    cout << "Original vector -> " ;
    for(int i : num){
        cout << i << " ";
    } cout << endl;


    //Access-------------------------------
    // cout << "Element at index 2 is " << num.at(2) << endl;
    // cout << "Element at index 10 is " << num.at(10) << endl;
    // cout << num[10];

    // num.at(2) = 33;

    // cout << "updated Element at index 2 is " << num.at(2) << endl;

    //Delete-----------------------------------
    num.pop_back();

    cout << "Updated vector -> " ;
    for(int i : num){
        cout << i << " ";
    } cout << endl;

}

/*
size()
front()
back()
capacity()
clear()
*/