/*
To check if array is sorted or not.
If sorted, returns true else returns false.
*/

#include<bits/stdc++.h>
using namespace std;

//Recursively
bool isSorted(int a[], int size){
    //Base Case
    //If size of the array is 0 or 1, 
    //then it is already sorted 
    if(size == 0 || size == 1){
        return true;  
    }

    if(a[0] > a[1]){
        //array is not sorted  
        return false;
    }

    bool isSmallerSorted = isSorted(a + 1, size - 1);
    return isSmallerSorted; 
}

int main(){
    int a[] = {1,2,3,4,5};
    int size = 5;
    bool x = isSorted(a, size);
    cout << x;
}