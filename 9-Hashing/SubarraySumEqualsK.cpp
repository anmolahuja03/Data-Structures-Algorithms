/*
@author Anmol Ahuja
Reference : https://leetcode.com/problems/subarray-sum-equals-k/
*/

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mpp;
        int psum = 0, cnt = 0;
        mpp[0] = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            psum += nums[i];
            if (mpp.find(psum - k) != mpp.end())
            {
                cnt += mpp[psum - k];
            }
            mpp[psum]++;
        }
        return cnt;
    }
};