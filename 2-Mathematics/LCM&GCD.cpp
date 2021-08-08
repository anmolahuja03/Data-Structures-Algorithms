class Solution {
  public:
    long long minm, maxm, temp;
    
    long long int hcf(long A, long B){
        maxm = max(A, B);
        minm = min(A, B);
        if(minm == 0) 
        cout << maxm;
        while(maxm % minm != 0){
            temp = maxm;
            maxm = minm;
            minm = temp % minm;
        }
        return minm;
    }
    
    long long int lcm(long A, long B){
        long long lcm;
        lcm = (A * B)/minm;
        return lcm;
    }
    
    vector<long long> lcmAndGcd(long long C , long long D) {
        // code here
        long long gcd = hcf(C,D);
        long long lcm = lcm(C,D);
        return {lcm,gcd};
    }
};