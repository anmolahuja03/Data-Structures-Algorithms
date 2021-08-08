class Solution {
public:
    vector<vector<int>>v;
    void rightrotate(vector<int>&nums,int i,int j)
    {
        int temp = nums[j];
        for(int k=j; k>0; k--)
        {
            nums[k] = nums[k-1];
        }
        nums[i] = temp;
    }
    void leftrotate(vector<int>&nums,int i,int j)
    {
        int temp = nums[i];
        for(int k=i; k<j; k++)
        {
            nums[k] = nums[k+1];
        }
        nums[j] = temp;
    }
    void permutate(vector<int>&nums,int index)
    {
        if(index == nums.size())
        {
            v.push_back(nums);
            return;
        }
        for(int j=index; j<nums.size(); j++)
        {
            rightrotate(nums,index,j);
            permutate(nums,index+1);
            leftrotate(nums,index,j);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permutate(nums,0);
        return v;
    }
};