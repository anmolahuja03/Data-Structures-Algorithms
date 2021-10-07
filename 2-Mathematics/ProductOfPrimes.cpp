// Naive Approach
class Solution
{
public:
    const unsigned int M = 1000000007;
    int isPrime(long long N)
    {
        if (N == 1)
            return 0;
        for (int i = 2; i * i <= N; i++)
        {
            if (N % i == 0)
                return 0;
        }
        return 1;
    }

    long long primeProduct(long long L, long long R)
    {
        int p = 1;

        for (int i = L; i <= R; i++)
        {
            if (isPrime(i))
            {
                int temp = i;
                p = (p * temp) % M;
            }
        }
        return p;
    }
};

---------------------------------------------------------------