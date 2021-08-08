class Solution {
public:
    int mySqrt(int x) {
        //Approach 1 - Inbuilt function
        // int ans = sqrt(x);
        // return ans;
        
        //Approach 2 - Naive solution , TC = O(sqrtx)
        // long long i = 1;
        // long long sqrt = i * i;
        // while(sqrt <= x){
        //     i++;
        // }
        // return i-1;
        
        //Approach 3 - Using B.S , TC = O(log n)
        long long low = 1, high = x, ans = -1;
        if(x == 0) return 0;
        while(low <= high){
            long long mid = (low + high) / 2;
            long long sqrt = mid * mid;
            if(sqrt == x){
                return mid;
            }
            else if(sqrt > x){
                high = mid - 1;
            }
            else{
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};