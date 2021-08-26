/* 
@author Anmol Ahuja
Reference : https://leetcode.com/problems/single-number-ii/
*/

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        // Hashing
        /*
        map<int, int> mpp;
        
        for(int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        
        for(auto it : mpp) {
            if(it.second == 1) {
                return it.first;
            }
        }
        return -1;
        */



        // Bit Manipulation
        //Optimized TC : O(N*(max_num_of_bits))
        long mask = (1L << 31);
        long ans = 0;

        for (int i = 31; i >= 0; i--)
        {
            int cnt = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] & mask)
                    cnt++;
            }

            if (cnt % 3 != 0)
                ans += mask;

            mask >>= 1;
        }
        return ans;
    }
};