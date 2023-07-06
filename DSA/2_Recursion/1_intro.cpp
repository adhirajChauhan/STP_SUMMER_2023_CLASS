#include <iostream>
using namespace std;

int power(int n){

    //base case 
    if(n == 0){
        return 1;
    }

    //recursive relation
    int smallProblem = power(n-1);
    int bigProblem = 2 * smallProblem;

    return bigProblem;

}

int factorial(int n){
    //base case
    if(n == 0){
        return 1;
    }

    //relation
    int smaller = factorial(n-1);
    int bigger = n * smaller;

    return bigger;
}

int fib(int n){

    if(n==0) return 0;
    if(n==1) return 1;

    int ans = fib(n-1)+fib(n-2);
    return ans;
}

int main(){
    // int n = 10;

    // int powerAns =  power(10);
    // cout << powerAns << endl;

    int ans = factorial(3);
    cout << ans;
}