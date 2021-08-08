class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       // Brute Force Worst Case T.C would take O(n^2)

       // Effecient Approach - O(n)
        int currmax = INT_MIN;
        int ans = 0;
        for(int i=0;  i<arr.size(); i++){
            currmax = max(currmax,arr[i]);
            if(currmax==i)
                ans++;   //break a chunk at this point
        }
        return ans;
    }
};