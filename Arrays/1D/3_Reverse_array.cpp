#include <iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int evenArr[6] = {3,5,2,9,11,6};
    int oddArr[5] = {5,8,1,4,3};

    print(evenArr,6);

    reverse(evenArr,6);
    reverse(oddArr,5);

    print(evenArr,6);

}




