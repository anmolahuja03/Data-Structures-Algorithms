/*
Write a function that takes input an array of distinct integers
and returns the length of highest mountain.

A mountain is defined as adjacent integers that are strictly
increasing until they reach a peak, at which they become strictly 
decreasing. At least 3 numbers are required to form a mountain.

Ex - I/P - [5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4]
O/P - 9

*/
#include<bits/stdc++.h>
using namespace std;

int mountain(vector<int> arr){
    int n = arr.size();

    int largest = 0;
    //first and last element cant be peak
    for(int i=1; i<=n-2;){
        //to check whether a[i] is peak or not
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            //do some work
            int count = 1;
            int j = i;
            //count backwards(left)
            while(j>=1 && arr[j]>arr[j-1]){
                j--; 
                count++;
            }

            //count forwards(right)
            while(i<=n-2 && arr[i]>arr[i+1]){
                i++; 
                count++;
            }
            largest = max(largest, count);
        }
        else{
            i++;
        }
    }
    return largest;
}


int main(){
    vector<int> arr = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    cout << mountain(arr) << endl;

    return 0;
}