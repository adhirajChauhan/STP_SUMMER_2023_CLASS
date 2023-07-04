#include <iostream>
using namespace std;
#include <climits>

bool isPresent(int arr[][4], int target, int row, int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == target){
                return true;
            }
        }
    }
    return false;
}

void printSum(int arr[][4], int row, int col){
    for(int row = 0 ; row < 3; row++){
        int sum = 0;
        for(int col = 0 ; col < 4; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

//larget sum is present in which row
int rowSum(int arr[][4], int row, int col){
    int maximum = INT_MIN;
    int rowIdx = -1;

    for(int row = 0 ; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 4; col++){
            sum+= arr[row][col];
        }
        if(sum > maximum){
            maximum = sum;
            rowIdx = row;
        }
    }

    cout << "Max sum is : " << maximum << endl;
    return row;
}

void wavePrint(int arr[][4], int r, int c){

    for(int col=0; col < 4; col++){
        if(col%2==1){
            for(int row = r - 1; row >= 0; row--){
                cout << arr[row][col] << " "; 
            }
        }
        else{
            for(int row = 0; row < 3; row++){
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        } cout << endl;
    }

    // cout << "Element to search : " <<  " ";
    // int target;
    // cin >> target;

    // if(isPresent(arr, target, 3, 4)){
    //     cout << "Is present" << endl;
    // }
    // else{
    //     cout << "Not persent" << endl;
    // }

    // printSum(arr,3,4);

    // cout << "Row containing max sum is : " << rowSum(arr, 3,4) << endl;

    wavePrint(arr, 3, 4);
}
