// Count and sum of divisors of a number
#include<bits/stdc++.h>
using namespace std;

// Naive Approach
/*
int main() {
    int n;
    cin >> n;
    int count = 0, sum = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << endl;
            count++;
            sum += i;
        }
    }
    cout << count << " " << sum << endl;
}
*/

//------------------------------------------------

// Optimized O(sqrt(n))
int main()
{
    int n;
    cin >> n;
    int count = 0, sum = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " " << n/i << endl;
            count += 1;
            sum += i;
            if(n/i != i) {
                sum += n/i;
                count += 1;
            }
        }
    }
    cout << count << " " << sum << endl;
}