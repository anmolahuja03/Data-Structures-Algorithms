class Solution {
public:
    int countPrimes(int n) 
   {
        // Implementing Sieve
        vector<bool> primes(n+1);
        for(int i=1; i<=n; i++)
        {
            // initially considering all numbers as prime
            primes[i] = 1;
        }
        
        // as 1 is a non prime no
        primes[1] = 0;
        
        for(int i=2; i*i<=n; i++)
        {
            if(primes[i] == 1)
            {
                for(int j=i; i*j<=n; j++)
                {
                    // as i*j will be a non prime (multiple of prime)
                    primes[i*j] = 0;
                }
            }
        }
        
        int count = 0;
        for(int i=2; i<n; i++)
        {
            if(primes[i] == 1)
                count++;
        }
        
        return count;
    }
};