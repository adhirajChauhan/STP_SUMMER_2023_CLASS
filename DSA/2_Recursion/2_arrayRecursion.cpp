#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i]  << " ";
    }
}

bool isSorted(int arr[], int size){

    cout << endl;
    print(arr,size);

    //base case
    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        //recursive
        bool remainigPart = isSorted(arr + 1, size - 1);

        return remainigPart;
    }
}

//find the sum of all the elements in arr by recursion
int getSum(int arr[], int size){
    if(size == 0) return 0;

    if(size == 1) return arr[0];

    int remainigPart = getSum(arr+1, size -1);
    int sum = arr[0] + remainigPart;

    return sum;
}

int main(){
    int arr[6] = {1,2,3,44,5,6};

    bool ans = isSorted(arr,6);

    if(ans){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted " << endl;
    }
}