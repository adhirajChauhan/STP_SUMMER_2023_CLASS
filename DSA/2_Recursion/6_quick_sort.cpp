#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    //find pivot (first element)
    int pivot = arr[s];

    //counting how many elements are less than pivot
    int count = 0;
    for(int i = s+1; i<=e;i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    //after count, we got to know about the right place of pivot, now we will create pivotIndex at that point
    int pivotIndex = s + count;

    swap(arr[pivotIndex], arr[s]);

    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quicksort(int arr[], int s, int e)
{
    //base case
    if(s >= e){
        return;
    }

    //partition
    int p = partition(arr, s, e);

    //sort left
    quicksort(arr, s, p-1);

    //sort left
    quicksort(arr, p+1, e);
}

int main(){
    int arr[5] = {2,4,6,1,9};
    int n = 5;

    quicksort(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}