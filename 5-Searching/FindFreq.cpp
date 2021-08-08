#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int nums[], int n, int target) {
	    //Linear Search - TC O(n^2)
	   // int count = 0;
	   // for(int i=0; i<n; i++)
	   // {
	   //     if(arr[i] == x) count++;
	   // }
	   // return count;
	    
	    //Binary search - TC(logn)
	     vector<int> arr = {-1, -1};
        
        // Binary search for first index
        int mid, low = 0, high = n - 1;
        while(low <= high){
            mid = low + (high - low) / 2;
            if(nums[mid] == target){
                arr[0] = mid;
                high = mid - 1;
                }
            else if(nums[mid] > target)
                high = mid - 1;
            else 
                low = mid + 1;
        }
        
        
        // Binary search for last index
        low = 0, high = n - 1;
        while(low <= high){
            mid = low + (high - low) / 2;
            if(nums[mid] == target){
                arr[1] = mid;
                low = mid + 1;
            }
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        
        if (arr[0] == -1 || arr[1] == -1) return 0;
        else
        return arr[1] - arr[0] + 1;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends