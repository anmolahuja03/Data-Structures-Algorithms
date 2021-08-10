https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Brute Force
//         int max_sum=INT_MIN;
//         for(int i=0; i<nums.size(); i++)
//         {
//             int sum = 0;
//             for(int j=i; j<nums.size(); j++)
//             {
//                 sum = sum + nums[j];
//                 max_sum = max(max_sum,sum);
                
//             }
//         }
//         return max_sum;
        
        // Kadane's Algorithm
        int sum = 0, maxsum = INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            maxsum = max(maxsum, sum);
            
            if(sum < 0) sum = 0;
        }
        return maxsum;
    }
};