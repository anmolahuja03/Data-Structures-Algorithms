/* Given an integer array, and its size and a variable number
x. We have to find last index of the x in array.

Input : 5 5 6 5 6, size : 5, x : 5
Output : 3
*/

//Generally in the case of array, break 
//the problem as 1 & n - 1 or (1 to n-1) & n (Recursion)

#include<bits/stdc++.h>
using namespace std;

int last_index(int a[], int size, int x){
    //Base case
    if(size == 0){
        return -1;
    }

    //Recursive call
    int ans = last_index(a + 1, size - 1, x);

    //Small Calculation
    if(ans == -1){
        if(a[0] == x)
        return 0;
        else
        return -1;
    }
    else{
        return ans+1;
    }
}

int main(){
    int a[] = {5, 5, 6, 5, 6};
    int size = 5;
    int x = 6;
    int result = last_index(a, size, x);
    cout << result;
}