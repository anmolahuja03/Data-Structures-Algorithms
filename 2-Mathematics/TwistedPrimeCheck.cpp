// Reference : https://practice.geeksforgeeks.org/problems/twisted-prime-number0500/1/?problemStatus=unsolved&difficulty[]=-2&difficulty[]=-1&page=1&category[]=Prime%20Number&query=problemStatusunsolveddifficulty[]-2difficulty[]-1page1category[]Prime%20Number#
class Solution
{
public:
    int isPrime(int N)
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

    int Reverse(int N)
    {
        int reversedNumber = 0, remainder;
        while (N != 0)
        {
            remainder = N % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            N /= 10;
        }
        return reversedNumber;
    }

    int isTwistedPrime(int N)
    {
        int temp = Reverse(N);
        if (isPrime(N) && isPrime(temp))
            return 1;
        else
            return 0;
    }
};