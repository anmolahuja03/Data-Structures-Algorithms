class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        // Naive Approach - By doing linear search 
        // Searching from left and finding the first occurence of target
        // Searching from the last and finding the last occurence of target
        
        // Optimal Approach - By using Binary search        
        // 2 Binary searches - 
        // First one : to find the first index
        // Second one : to find the last element
        
        vector<int> arr = {-1, -1};
        
        // Binary search for first index
        int mid, low = 0, high = nums.size() - 1;
        while(low <= high) {
            mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                arr[0] = mid;
                high = mid - 1;
                }
            else if(nums[mid] > target)
                high = mid - 1;
            else  
                low = mid + 1;
        }
        
        
        // Binary search for last index
        low = 0, high = nums.size() - 1;
        while(low <= high) {
            mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                arr[1] = mid;
                low = mid + 1;
            }
            else if(nums[mid] > target)
                high = mid - 1;
            else 
                low = mid + 1;
        }
        return arr;
    }
};