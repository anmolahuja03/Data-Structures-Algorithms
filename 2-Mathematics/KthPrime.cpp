#include<bits/stdc++.h>
using namespace std;
long long int N = 100000000;

// Idea is to use sieve algo, create a sieve and store
// all the prime nos in some data structure and return (k-1)th
// element from the data structure.

bool sieve[1000000001];
vector<int> primes;     

void create_sieve() {
    for(int i = 2; i <= N; i++) {
        sieve[i] = true;
    }

    for(int i = 2; i * i <= N; i++) {
        if(sieve[i] == true) {
            for(int j = i * i; j <= N; j += i) {
                sieve[j] = false;
            }
        }
    }
 
// In order to figure out size till primes needed to be printed
    // int limit_primes = 5 * 1000000;
    // int cnt = 0;
    // int size = 1;
    // for(int i = 2; i <= N; i++) {
    //     if(sieve[i] == true) {
    //         cnt++;
    //     }
    //     if(cnt == limit_primes) {
    //         size = i;
    //         break;
    //     }
    // }
    // cout << size << endl;

    for(int i = 2; i <= N; i++) {
        if(sieve[i] == true) {
            primes.push_back(i);
        }
    }
}

int main() {
    create_sieve();
    int q;
    cin >> q;
    while(q--) {
        int k;
        cin >> k;
        cout << primes[k-1] << endl;
    }
}