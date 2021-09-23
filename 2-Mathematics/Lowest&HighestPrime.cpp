// Lowest prime and highest prime of a number
#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);            // initially marking all these nos as prime
vector<int> lp(N, -1), hp(N, -1);

// N * log (log (N))
int main()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    { // or i * i < N
        if (isPrime[i] == true)
        {
            lp[i] = hp[i] = i;        // prime nos are it's own highest and lowest primes
            for (int j = 2 * i; j < N; j += i)
            {   // i * i  in place of 2 * i
                // marking all the multiples of i as false
                isPrime[j] = false;
                hp[j] = i;
                if(lp[j] == -1) {
                    lp[j] = i; 
                }
            }
        }
    }

    for(int i = 1; i < 10; i++) {
        cout << i << " " << lp[i] << " " << hp[i] << endl;
    }
}