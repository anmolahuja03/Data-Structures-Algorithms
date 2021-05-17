class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       /*
        TC = O(n^2)        
        int i,j,temp;
        int n=nums.size();
        for(j=0;j<k%n;j++){
            temp=nums[n-1];
            for(i=n-2;i>=0;i--){
                nums[i+1]=nums[i];
            }
            nums[0]=temp;
        }
        cout << nums[j];
      */
        
        //Effecient Approach
        int i, j;
        int n=nums.size();
        int temp[n];
        for(i=0;i<n;i++){
            temp[(i+k)%n]=nums[i];
        }
        for(i=0;i<n;i++){
            nums[i]=temp[i];
        }
     }
};