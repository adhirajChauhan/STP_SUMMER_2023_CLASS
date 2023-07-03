#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;

    int end = size - 1;

    int mid = (start+end)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            //goto right
            start = mid + 1;
        }
        else{
            //goto left
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int evenArr[6] = {2,4,6,8,10,12};
    int oddArr[5] = {2,4,6,8,10};

    int evenIndex = binarySearch(evenArr,6,10);
    cout << "Index of number is : " << evenIndex << endl;

    int oddIndex = binarySearch(oddArr,5,2);
    cout << "Index of number is : " << oddIndex << endl;

}