class Solution {
public:
    int findPeakElement(vector<int>& nums) {  
        //Linear Search - T.C = O(n)
         int n = nums.size();
        //Corner cases -->
        //in case of single element, that element will only be the peak
         if(n == 1)  return 0;

        //in case of 0th element, just comparing it with right element
        //as left element does not exist
         if (nums[0] >= nums[1])  return 0;
         
        //in case of (n-1)th/last element, just comparing it with left element
        //as right element does not exist
         if (nums[n-1] >= nums[n-2]) return n-1;
         
        //for all other elements
         for(int i=1 ; i<nums.size()-1; i++) {
               if(nums[i] >= nums[i-1] && nums[i] >= nums[i+1])
                  return i;
           }
         return 0;
    }
};