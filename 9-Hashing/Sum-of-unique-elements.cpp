/*
@author Anmol Ahuja
Reference : https://leetcode.com/problems/sum-of-unique-elements/
*/

class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        int sum = 0;
        for (auto itr : mpp)
        {
            if (itr.second == 1)
            {
                sum += itr.first;
            }
        }
        return sum;
    }
};