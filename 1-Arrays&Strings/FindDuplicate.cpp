https://leetcode.com/problems/find-the-duplicate-number/

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // Hashmap
        // TC = O(n)
        // SC = O(n)
        map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }

        for (auto it : mpp)
        {
            if (it.second >= 2)
                return it.first;
        }
        return -1;

        // Naive - Sorting
        // TC = O(nlogn)
        // SC = O(1)
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == nums[i + 1])
                return nums[i];
        }
        return -1;

        // Optimal - Linked List Cycle Method
        // TC = O(n)
        // SC = O(1)
        int slow = nums[0];
        int fast = nums[0];

        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        fast = nums[0];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};