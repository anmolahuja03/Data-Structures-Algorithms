class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        if(low == high) return nums[0];
        while(low <= high) {
            int m = (high + low) / 2;
            if(m == 0) {
                if(nums[m+1] != nums[m]) return nums[m];
                else low = m+1;
            }
            else if(m == n-1) {
                if(nums[m-1] != nums[m]) return nums[m];
                else high = m-1;
            }
            else if(nums[m] != nums[m+1] && nums[m] != nums[m-1]) {
                return nums[m];
            }
            else {
                int f,s;
                if(nums[m] == nums[m+1])
                {
                    f = m; s = m+1;
                }
                else
                {
                    f = m-1; s = m;
                }
                if(f%2 == 0) low = m+1;
                else high = m-1;
            }
        }
        return 0;
    }
};