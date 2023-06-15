#include <iostream>
using namespace std;

int main(){
    
    int arr[5] = {1,2,3,4,5};

    int length = sizeof(arr)/sizeof(int);
    cout << "length of arr is : " << length << endl;

    for(int i = 0; i < length; i++){
        cout << arr[i] <<" ";
    } cout << endl;

    arr[2] = 6;

    for(int i = 0; i < length; i++){
        cout << arr[i] <<" ";
    }
}


//make an array of type string with length 5
//add 5 names, loop through them and print each name


// int arr[10] = {3,-3,5,-11,0,13,19,-4,6,8}
// number of positive numbers
// number of negative numbers
// number of odd numbers
// number of even numbers
// number of 0.


//A comment
//Another comment
