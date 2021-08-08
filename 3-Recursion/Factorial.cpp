// To find factorial of a given number

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    //Base Case
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    cout << factorial(5) << endl;
}