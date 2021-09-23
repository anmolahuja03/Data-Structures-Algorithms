#include <bits/stdc++.h>
using namespace std;

// 1. Generate pairs till <= sqrt(R) in some data structure.
// 2. Create a dummy array of size (R - L + 1) and mark that with 1.
// 3. Mark all multiples of primes in range (L-R) in dummy.

// L, R = 10^12
// R - L <= 10^6  (Array of 10^6 can be created)

int N = 1000000;
int sieve[1000001];

void create_sieve() {
    for(int i = 2; i <= N; i++) {
        sieve[i] = true;
    }

    for(int i = 2; i * i <= N; i++) {
        if(sieve[i] == true) {
            for(int j = i * i; j <= N; j++) {
                sieve[j] = false;
            }
        }
    }
}

// function to return all the primes till N
vector<int> generatePrimes(int N) {
    vector<int> temp;
    for(int i = 2; i <= N; i++) {
        if(sieve[i] == true) {
            temp.push_back(i);
        }
    }
    return temp;
}

int main() {
    create_sieve();
    int t;
    cin >> t;
    while(t--) {
        int l, r;
        cin >> l >> r;
        
        // step 1 : generate all primes till sqrt(r)
        vector<int> primes = generatePrimes(sqrt(r));

        // step 2 : create a dummy array of size r - l + 1 
        // and make eeryone as 1
        int dummy[r - l + 1];
        for(int i = 0; i < r - l + 1; i++) {
            dummy[i] = 1;
        }

        // step 3 : for all prime number mark its multiples
        // as false 
        for(auto x : primes) {
            int first_multiple = (l/x) * x;

            for(int j = max(first_multiple, x*x); j <= r; j += x) {
                dummy[j - l] = 0;
            }
        }

        // step 4 : getting all the primes 
        for(int i = l; i <= r; i++) {
            if(dummy[i - l] == 1) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}