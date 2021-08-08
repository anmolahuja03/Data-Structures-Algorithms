//To find the element at a given index
//of fibonacci series 

#include<bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5 8 13 21

//Recursive
int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main(){
    cout << fib(8);
}