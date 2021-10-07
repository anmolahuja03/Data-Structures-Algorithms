// Reference : https://practice.geeksforgeeks.org/problems/return-two-prime-numbers2509/1#
class Solution
{
public:
    vector<bool> isPrime(long n)
    {
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;

        for (long i = 2; i * i <= n; i++)
        {
            if (prime[i])
            {
                for (long j = i * i; j <= n; j += i)
                {
                    prime[j] = false;
                }
            }
        }
        return prime;
    }

    vector<int> primeDivision(int N)
    {
        vector<int> ans;
        vector<bool> prime = isPrime(N);
        for (int i = N; i >= 2; i--)
        {
            if (prime[i] && prime[N - i])
            {
                ans.push_back(N - i);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};