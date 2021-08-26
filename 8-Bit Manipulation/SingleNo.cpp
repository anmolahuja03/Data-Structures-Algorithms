/*
@author Anmol Ahuja
Reference : https://leetcode.com/problems/single-number/
*/

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        /*
     // Brute Force
        for(int i = 0; i < nums.size(); i++) {
            int count = 0;
            for(int j = 0; j < nums.size(); j++) {
                if(nums[i] == nums[j])
                    count++;
            }
            if(count == 1) 
                return nums[i];
        }
        return -1;
        
        
        
        // Hashmap
        map<int, int> mpp;
        
        for(int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        
        for(auto itr : mpp) {
            if(itr.second == 1) {
                return itr.first;
            }
        }
        return -1;
        
        
        
        // Sorting
        if(nums.size() < 1) {
            return 0;
        }
        
        else if(nums.size() > 1) {
            
            sort(nums.begin(), nums.end());
            
            for(int i=0; i<nums.size(); i=i+2 //i) {
                if(nums[i] != nums[i+1]) {
                    return nums[i];
                }
                //i++;
            }
        }
        
        //else for nums.size() == 1
        return nums[0];
        */


        // Bit Manipulation
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};