class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        //Brute Force T.C = O(NlogN)
        //Sorting the array, tracking the maximum
        //maximum would give us the ans
        
        
        //Effecient Approach T.C = O(N)
        //Technique used - Bucketing
        //No of gaps = N-1
        //finding gap=(max-min)/N-1 if (max-min) is perfectly divisible by no of gaps
        //gap = (max-min)/N-1 + 1 if not perfectly divisible (ceil value)
        //bucket no = arr[i]-min/gap
        
        //Edge cases - 
        //1-when array has less than 2 elements ---> No consecutive elements
        //2-If all the elements of array are equal, maxNum & minNum 
        //will be same ---> gap=0
        
         int n = nums.size();
        //Edgecase 1
        if(n<2 || n==0)
            return 0;
        
        int MaxNum = INT_MIN;
        int MinNum = INT_MAX;
        
        for(int i=0; i<n; i++){
            MaxNum = max(MaxNum, nums[i]);
            MinNum = min(MinNum, nums[i]);
        }
        
        if(MinNum == MaxNum)
             return 0;
        
        int gap = (MaxNum-MinNum)/(n-1);
        if((MaxNum - MinNum)%(n-1)!=0)
            gap++;
        
        vector<int> MinArr(n);
        vector<int> MaxArr(n);

        for(int i=0; i<n; i++){
            MinArr[i] = INT_MAX;
            MaxArr[i] = INT_MIN;
        }
        
        for(int i=0; i<n; i++){
            int bkt = (nums[i]-MinNum)/gap;
            MinArr[bkt] = min(MinArr[bkt], nums[i]);
            MaxArr[bkt] = max(MaxArr[bkt], nums[i]);
        }
        
        int ans = INT_MIN;
        int prev = INT_MIN;
        
        for(int i=0; i<n; i++){
            if(MinArr[i]==INT_MAX)
                continue;
            if(prev==INT_MIN)
                prev = MaxArr[i];
            else{
                ans=max(ans, MinArr[i]-prev);
                prev=MaxArr[i];
            }
        }
        return ans;     
    }      
};
