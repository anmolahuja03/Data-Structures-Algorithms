https://leetcode.com/problems/find-lucky-integer-in-an-array/

class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        map<int, int> mpp;
        vector<int> res;

        for (int i = 0; i < arr.size(); i++)
        {
            mpp[arr[i]]++;
        }

        for (auto itr : mpp)
        {
            if (itr.first == itr.second)
            {
                res.push_back(itr.first);
            }
        }

        if (res.size() != 0)
        {
            int ans = *max_element(res.begin(), res.end());
            return ans;
        }

        return -1;
    }
};