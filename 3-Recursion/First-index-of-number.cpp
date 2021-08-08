/* Given integer array, size and a variable x.
We need to return the first index of x.
Return -1 if the element does not exists.

Ex - Input : 5 5 6 5 6  , size : 5 , x : 5
Output : 0
*/

//Recursion (Points to remember)
//1 - Base case, 2 - Recursive call, 3 - Small Calculation

#include<bits/stdc++.h>
using namespace std;

int first_index(int a[], int size, int x){
    //Base case 
    //If size of the array is 0, 
    //Ans should be -1 as element does not exists
    if(size == 0) {
        return -1;
    }

    if(a[0] == x){
        return 0;
    }

    int ans = first_index(a + 1, size - 1, x);
    if(ans == -1){
        return -1;
    }
    else{
        return ans+1;
    }
}


int main(){
    int a[] = {1,2,3,4,5};
    int size = 5;
    int x = 5;
    int result = first_index(a, size, x);
    cout << result;
}