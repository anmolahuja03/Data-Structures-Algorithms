// Reference : https://codeforces.com/problemset/problem/26/A

#include <bits/stdc++.h>
using namespace std;
int N = 3005;

// Brute Approach
/*
bool isPrime(int n) {
    if(n == 1) return 0;
    if(n == 2) return 1;

    for(int i = 2; i * i <= n; i++) {
        if(n%i == 0) return 0;
    }
    return 1;
}

int AlmostPrime(int n) {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(isPrime(i)) {
            if(n%i == 0) cnt++;
        }
    }

    if(cnt == 2) return 1;
    else return 0;
}


int main() {
    int n;
    cin >> n;

    int c = 0;
    for(int i = 1; i <= n; i++) {
        if(AlmostPrime(i)) c++;
    }
    cout << c << endl;
}

*/

//------------------------------------------------------------------------


// Optimal Approach 
// Using a sieve to store number of distinct prime factors for every number

int sieve(int n) {
    int pr[n + 1] = {};   // all elements initially 0  (Stores no of divisors of a no i)
    vector<int> primes;
   
    for(int i = 2; i <= n; i++) {
        if(!pr[i]) {      // if the no is prime
            primes.push_back(i);
            for(int j = i; j <= n; j += i) {
                pr[j]++;  // iterating over its multiples and increasing their counts which means they are not prime anymore
            }
        }
    }
    
    // iterating over pr array checking if the no of divisors is equal to 2
    // which means that is the no is almost prime, incrementing count.
    int ans = 0;
    for(int i = 2; i <= n; i++) {
        if(pr[i] == 2) ans++;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    cout << sieve(n);
    return;
}

int main() {
    solve();
}