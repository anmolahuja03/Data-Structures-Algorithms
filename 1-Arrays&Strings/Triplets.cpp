/*
Given an array containing N integers, and a number S
denoting target sum. Find all the distinct integers that 
can add up to form target sum. The number in each triplet
should be ordered in ascending order, and triplets should
be ordered too. Return empty if no such triplet exists.

Input - [1, 2, 3, 4, 5, 6, 7, 8, 9, 15]
target = 18

Output - [[1, 2, 15],
         [3, 7, 8]
         [4, 6, 8]
         [5, 6, 7]]
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(vector<int> arr, int sum){
    //3rd Approach 
    int n = arr.size();
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());

    //Pick every a[i], solve pair sum for remaining part
    for(int i=0; i<=n-3; i++){
        int j = i + 1;
        int k = n - 1;

        while(j < k){
            int current_sum = arr[i];
            current_sum += arr[j];
            current_sum += arr[k];

            if(current_sum == sum){
                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if(current_sum > sum){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return result;
}

int main(){
    //Brute Force - Three loops O(N^3) time

    //Optimal - We can reduce this problem to a pair
    //sum problem as well. Pick one no (ex index 0, 18-1=17
    //apply pair sum problem in the remaining part.) T.C = O(N*N) , S.C = O(N)

    //Optimal - Two pointer (If array is sorted)
    //1 - Sort the array 
    //2 - Iterate a[i] , Apply pair sum(a[i], a[k]) using two pointer
    //T.C = O(NlogN + N^2)  = O(N^2)

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int S = 18;

    auto result = triplets(arr, S);

    for(auto v: result){
        for(auto no: v){
            cout << no << ",";
        }
        cout << endl;
    }
    return 0;
}