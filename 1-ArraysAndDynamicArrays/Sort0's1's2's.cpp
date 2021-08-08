https : //leetcode.com/problems/sort-colors/

        class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        //TC = O(2n) , SC = O(1) (Counting sort)
        //         int count0 = 0, count1 = 0, count2 = 0;
        //         for(int i=0; i<nums.size(); i++){
        //             if(nums[i] == 0) count0++;
        //             if(nums[i] == 1) count1++;
        //             if(nums[i] == 2) count2++;
        //         }

        //         nums.clear();

        //         while(count0--){
        //             nums.push_back(0);
        //         }
        //         while(count1--){
        //             nums.push_back(1);
        //         }
        //         while(count2--){
        //             nums.push_back(2);
        //         }

        //TC = O(n) SC = O(1) (Dutch National Flag Algo)
        if (nums.size() == 0)
            return;
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
                mid++;
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};