class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        //Brute Force T.C = O(NlogN)
        //Sorting the array, tracking the maximum
        //maximum would give us the ans
        
        //Effecient Approach T.C = O(N)
        //Technique used - Bucketing
        //No of gaps = N-1 (for n elements)
        //Min possible value of max consecutive diff = (max-min)/N-1 
        //If (max-min) is perfectly divisible by no of gaps ---> Case of even gaps
        //gap = (max-min)/N-1 + 1 if not perfectly divisible (ceil value) ---> case of odd gaps
        //bucket no = arr[i]-min/gap
        
        //Edge cases - 
        //1-When array has less than 2 elements ---> No consecutive elements
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
        
        // Edgecase : In case of no gap - when all elements are same
        if(MinNum == MaxNum)
             return 0;
        
        // when perfectly divisible
        int gap = (MaxNum-MinNum)/(n-1);
        // when not divisible perfectly
        if((MaxNum - MinNum)%(n-1)!=0)
            gap++;
        
        vector<int> MinArr(n);
        vector<int> MaxArr(n);

        for(int i=0; i<n; i++){
            MinArr[i] = INT_MAX;
            MaxArr[i] = INT_MIN;
        }
        
        for(int i=0; i<n; i++){
            // determining bucket no
            int bkt = (nums[i]-MinNum)/gap;
            // updating min and max of the buckets
            MinArr[bkt] = min(MinArr[bkt], nums[i]);
            MaxArr[bkt] = max(MaxArr[bkt], nums[i]);
        }
        
        // Final Step : Comparing the min of current bucket and
        // with the max of prev bucket. Neglecting the buckets
        // where there are no elements at all (No min, max)
        // Here, min = INT_MAX & max = INT_MIN
        int ans = INT_MIN;     // as we want to find max gap
        
        // to keep a track of prev max
        int prev = INT_MIN;
        
        // iterating over buckets
        for(int i=0; i<n; i++){
            // bucket which contains no elements 
            if(MinArr[i]==INT_MAX)
                continue;
            // In case of first non-empty bucket
            if(prev==INT_MIN)
                prev = MaxArr[i];
            // In some bucket where there is a min, and iterating
            // is not the first non-empty one
            else{
                ans=max(ans, MinArr[i]-prev);
                prev=MaxArr[i];
            }
        }
        return ans;     
    }      
};
