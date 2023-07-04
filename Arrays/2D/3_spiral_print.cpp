#include <iostream>
using namespace std;

void spiralPrint(int arr[][3], int row, int col){
    int topRow = 0;
    int bottomRow = row - 1;
    int leftCol = 0;
    int rightCol = col - 1;

    while(topRow <= bottomRow && leftCol <= rightCol){
        //print top row
        for(int i = leftCol; i <= rightCol; i++){
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        //print right column
        for(int i = topRow; i <= bottomRow; i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        //print bottom row
        for(int i = rightCol; i >= leftCol; i--){
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;

        for(int i = bottomRow; i >= topRow; i--){
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;
    }
}

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row = 3;
    int col = 3;

    spiralPrint(arr, row, col);
}