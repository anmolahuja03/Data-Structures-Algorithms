class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        
        while(low<=high)
        {
            int mid = (low + high) / 2;
            if(nums[mid] == target) return mid;
            //to check if low to mid is sorted or not
            else if(nums[low] <= nums[mid]) {
                //to check if target lies between low to mid
                if(target >= nums[low] && nums[mid]>=target) {
                    //if yes then search over this part
                    high = mid-1;
                }
                else {
                    //states that target lies between mid to high
                    low = mid + 1;
                }
            }
            //to check if mid to high is sorted or not
            else {
                //to check if target lies between mid to high
                if(target > nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }     
             }
        }
        return -1;
    }
};