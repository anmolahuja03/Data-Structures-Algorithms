/*
@author Anmol Ahuja
Reference : https://leetcode.com/problems/two-sum/
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        /*
        Brute Force 
        TC : O(n^2) , SC : O(n)
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
        */


        // Hashing
        // TC : O(n) , SC : O(n)
        vector<int> v;
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            if (m.find(target - nums[i]) != m.end()) {
                v.push_back(m[target - nums[i]]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]] = i;
        }
        return v;
    }
};