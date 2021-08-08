
//T.C = O(N!*N)   ---> N! = no of func calls, N = time spent in printing them
//Approach : BackTracking
class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> permute(vector<int>& nums){
        solve(nums, 0);
        return ans;
    }
    
    void solve(vector<int> &nums, int index)
    {
        //termination condition : when at last character 
        if(index == nums.size()) {
            ans.push_back(nums);
        }
        else {
            
        //for all the intermediate states, no of choices we have
        //is from index to size(). So running a loop where we would
        //swap index with the desired char, make a fun call and then undo
        
        for(int i=index; i<nums.size(); i++)
        {
            //swap
            swap(nums[i] , nums[index]);
            //call
            solve(nums, index+1);
            //unswap
            swap(nums[i], nums[index]);
        }
      }
    }
};