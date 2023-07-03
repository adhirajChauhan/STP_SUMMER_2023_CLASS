#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i =0; i < n-1; i++){

    bool swapped = false;

        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    int arr[6] = {4,2,6,3,9,8};

    bubbleSort(arr,6);

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }

}