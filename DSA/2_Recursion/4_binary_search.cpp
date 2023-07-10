#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k){

    if(s > e){
        //key not found
        return false;
    }

    int mid = (s+e)/2;

    if(arr[mid] == k){
        return true;
    }

    else if(k > arr[mid]){
        //goto right recursivly
        return binarySearch(arr, mid+1,e,k);
    }

    else{
        //goto left recur
        return binarySearch(arr, s,mid-1,k);

    }
}


int main(){

int arr[6] = {3,5,8,10,14,19};

int size = 6;
int key = 3;
    binarySearch(arr,0,size-1,key);

}