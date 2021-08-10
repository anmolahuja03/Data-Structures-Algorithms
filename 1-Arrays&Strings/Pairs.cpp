/*
Given - Array containing N integers, and an number S denoting
target sum. Find 2 distinct integers (cannot repeat numbers) that can pair up to
form target sum. Assuming there is only 1 such pair.

Input - [10, 5, 2, 3, -6, 9, 11]
S = 4
Output - [10, -6]
*/

#include<bits/stdc++.h>
using namespace std;

//3rd Optimised Approach Logic
vector<int> pairSum(vector<int> arr, int Sum){
    //data structure used - unordered set of integers
    unordered_set<int> s;
    //vector of integers
    vector<int> result;
    
    //start iterating over all the elements of array
    for(int i=0; i<arr.size(); i++){
        
        int x = Sum - arr[i];
        //if this x is present inside set, then find out pair
        if(s.find(x) != s.end()){
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        //insert the current no inside set
        s.insert(arr[i]);
    }
    //return empty vector if not present
    return {};
}

int main()
{
    //Brute Force - Form all pairs. O(N^2)
    //Pick first number, try to pair it with all other nos.

    //Optimal - Sorting & Searching
    // 1 - Sort an array
    // 2 - Binary search to find the element 
    // T.C = O(NLogN) : Sorting(NlogN) + SearchingO(NlogN) : B.S = O(NlogN)

    //Optimal - Data structure based : By using hashtable or set
    //Unordered set : check a number is present or not in O(1)
    //Go to every number , check its complementary
    //Add to set as you go along , T.C = O(N)

    //Boiler Plate Code : 
    vector<int> arr{10, 5, 2, 3, -6, 9, 11};
    int S = 4;

    auto p = pairSum(arr, S);
    if(p.size() == 0) {
        cout << "No such pair";
    }
    else{
        cout << p[0] << "," << p[1] << endl;
    }
    return 0;
}