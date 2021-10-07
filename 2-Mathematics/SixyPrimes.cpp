// Reference : https://practice.geeksforgeeks.org/problems/sexy-primes3341/1/?problemStatus=unsolved&page=1&category[]=sieve&query=problemStatusunsolvedpage1category[]sieve#
class Solution
{
public:
    vector<int> create_sieve(int l, int r)
    {
        int primes[10001];

        for (int i = 0; i < 10000; i++)
        {
            primes[i] = 1;
        }

        primes[0] = primes[1] = false;

        for (int i = 2; i * i <= 10000; i++)
        {
            if (primes[i] == 1)
            {
                for (int j = i * i; j <= 10000; j += i)
                {
                    primes[j] = 0;
                }
            }
        }

        vector<int> res;
        for (int i = l; i <= r; i++)
        {
            if (primes[i] == 1)
            {
                res.push_back(i);
            }
        }

        return res;
    }

    vector<int> sixyPrime(int L, int R)
    {
        vector<int> final;
        vector<int> temp = create_sieve(L, R);

        for (int i = 0; i < temp.size(); i++)
        {
            for (int j = i + 1; j < temp.size(); j++)
            {
                if (temp[j] - temp[i] == 6)
                {
                    final.push_back(temp[i]);
                    final.push_back(temp[j]);
                    break;
                }
            }
        }

        if (final.empty())
        {
            final.push_back(-1);
        }
        return final;
    }
};