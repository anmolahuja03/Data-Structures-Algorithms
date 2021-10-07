// Reference : https://practice.geeksforgeeks.org/problems/prime-factors-and-their-powers5243/1#

class Solution
{
public:
    vector<int> primeFactors(int N)
    {
        vector<int> res;

        for (int i = 2; i * i <= N; i++)
        {
            int temp = 0;
            while (N % i == 0)
            {
                temp++;
                N = N / i;
            }
            if (temp != 0)
            {
                res.push_back(i);
                res.push_back(temp);
            }
        }

        if (N != 1)
        {
            res.push_back(N);
            res.push_back(1);
        }
        return res;
    }
};