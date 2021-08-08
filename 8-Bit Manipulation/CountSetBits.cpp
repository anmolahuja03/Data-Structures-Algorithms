class Solution {
public:
    int hammingWeight(uint32_t n) {
        // TC = O(32)
        int count = 0;
        // long x = 1;
        long mask = (1L << 31);
        while(mask) {
            if(mask & n) 
                count ++;
            mask >>= 1;
        }
        return count;
        
        // Optimized
        // int count = 0;
        // while(n) {
        //     n = (n & (n-1));
        //     count++;
        // }
        // return count;
    }
};