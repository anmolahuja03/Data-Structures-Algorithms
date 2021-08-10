https://leetcode.com/problems/bitwise-and-of-numbers-range/

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // TC = O(right-left)
        // long long ans = (1L << 32) - 1;
        // // long long ans = left;
        // for(int i = left; i <= right; i++) {
        //     ans = (ans & i);
        // }
        // return ans;
        
        // Optimized
        long mask = (1L << 31);
        int ans = 0;
        
        while(mask) {
            if((mask & left) == (mask & right)) {
                if(mask & left)
                    ans += mask;
                mask >>= 1;
            } else {
                break;
            }
        }
      return ans;
    }
};