#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    // Base case
    if(n == 0) {
        return 0;
    }
    int totalsum = n + sum(n-1);
    return totalsum;
}

int main() {
    int n;
    cin >> n;
    int ans = sum(n);
    cout << ans;
}