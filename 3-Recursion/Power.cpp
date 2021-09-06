#include <bits/stdc++.h>
using namespace std;

//n^p = n * n * n * n --- p times 
//n^p = n * n^(p-1)
//n^0 = 1   

int power(int n, int p) {
    if(p == 0) {
        return 1;
    }

    int prevPower = power(n, p-1);
    return n * prevPower;
}

int main() {
    cout << power(2, 5);
    return 0;
}