/*
@author Anmol Ahuja
Reference : https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends

/*You are required to complete this function*/

int maxLen(int arr[], int n)
{
    // Your code here
    unordered_map<int, int> mpp;
    int ans = 0, psum = 0;
    mpp.insert({0, -1});

    for (int i = 0; i < n; i++)
    {
        psum += arr[i];
        if (mpp.find(psum) == mpp.end())
        {
            mpp[psum] = i;
        }
        else
        {
            ans = max(ans, i - mpp[psum]);
        }
    }
    return ans;
}
