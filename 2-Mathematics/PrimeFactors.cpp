// printing all the unique prime factors of a number
// Reference : https://practice.geeksforgeeks.org/problems/prime-factors5052/1/?category[]=Prime%20Number&category[]=Prime%20Number&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]Prime%20NumberproblemStatusunsolveddifficulty[]0page1category[]Prime%20Number#
class Solution
{
public:
    vector<int> AllPrimeFactors(int n)
    {
        set<int> st;
        vector<int> prime_factors;

        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                st.insert(i);
                n = n / i;
            }
        }
        // case when single prime no is left
        if (n > 1)
        {
            st.insert(n);
        }

        for (auto itr = st.begin(); itr != st.end(); itr++)
        {
            prime_factors.push_back(*itr);
        }
        return prime_factors;
    }
};