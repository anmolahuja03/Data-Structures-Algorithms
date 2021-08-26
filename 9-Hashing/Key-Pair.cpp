/*
@author Anmol Ahuja
Reference : https://practice.geeksforgeeks.org/problems/key-pair5616/1
*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution
{
public:
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x)
	{
		// code here
		//Approach 1 - Two Pointers
		sort(arr, arr + n);
		int i = 0, j = n - 1;
		while (i < j)
		{
			if (arr[i] + arr[j] == x)
				return true;
			else if (arr[i] + arr[j] > x)
			{
				j--;
			}
			else
				i++;
		}
		return false;


		//Approach 3 - Hashing(2 for loops)
		unordered_map<int, int> mpp;
		for (int i = 0; i < n; i++)
		{
			mpp[arr[i]]++;
		}

		for (int i = 0; i < n; i++)
		{
			if (mpp.find(x - arr[i]) != mpp.end())
			{
				int freq = mpp[x - arr[i]];
				if (arr[i] == x - arr[i] && freq > 1)
					return true;

				else if (arr[i] != x - arr[i])
					return true;
			}
		}
		return false;


		//Approach 3 - Hashing (Single for loop)
		unordered_map<int, int> mpp;
		for (int i = 0; i < n; i++)
		{
			if (mpp.find(x - arr[i]) != mpp.end())
			{
				return true;
			}
			mpp[arr[i]] = 0;
		}
		return false;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		Solution ob;
		auto ans = ob.hasArrayTwoCandidates(arr, n, x);
		cout << (ans ? "Yes\n" : "No\n");
	}
	return 0;
}
// } Driver Code Ends