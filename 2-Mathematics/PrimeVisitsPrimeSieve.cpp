// The first line contains N no of test cases. The next N lines
// contain two integers a and b denoting the range of country numbers.
// O/P contains N lines each containing an answer for the test case.

//-------------------------------------------------------------------

// Example - I/P :     2              O/P :  
//                     1   10                 4
//                     11  20                 4


#include<bits/stdc++.h>
#define ll long long
using namespace std;

// bool isPrime(int n) {
//     if(n == 1) return 0;
//     for(int i = 2; i * i <= n; i++) {
//         if(n%i == 0) return 0;
//     }
//     return 1;
// }

// generating array containing prime nos
void prime_sieve(int *p) {

    //marking all odd no as prime
    for(int i = 3; i <= 1000000; i += 2) {
        p[i] = 1;
    }

    for(ll i = 3; i <= 1000000; i += 2) {
        if(p[i] == 1) {
            // marking all the multiples of i as non primes
            for(ll j = i * i; j <= 1000000; j += i) {
                p[j] = 0;
            }
        }
    }

    p[0] = p[1] = 0;
    p[2] = 1;
}

int main() {
    int p[1000005] = {0};
    prime_sieve(p);

    ll c_sum[1000005] = {0};

    // precompute the cnt of primes upto an index i     
    for(ll i = 1; i <= 1000000; i++) {
        c_sum[i] = c_sum[i - 1] + p[i];
    }

    int t;
    cin >> t;
    while(t--) {
        ll l, h;
        cin >> l >> h;
        
        cout << c_sum[h] - c_sum[l - 1] << endl;
    }
    return 0;
}