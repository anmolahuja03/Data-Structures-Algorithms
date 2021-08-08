/*
Given an integer array, size and a variable x. 
We have to print all the indices where x variable is
present. Print the size of the output array.
 
Ex - 
Input : 5 6 5 5 6 , size : 5 , x : 5 
Output : 0 2 3 (indices where x = 5 is present) 
Return the size of output array = 3
*/

int all_indices(int arr[], int size, int x, int output[]){
    //Base case
    if(size == 0){
        //x not found at any index as size of array is 0
        return 0;
    }

    //Recursive call
    int ans = all_indices(arr + 1, size - 1, x, output);

    //Small calculation
    
    
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    
}