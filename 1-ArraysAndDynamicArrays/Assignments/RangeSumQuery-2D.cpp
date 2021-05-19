#include<bits/stdc++.h>
using namespace std;
long long presum[N][N];
const int N = 1e3+10;
int arr[N][N];

//Brute force Approach - O(N^2) + O(N^2*Q) = 10^5 + 10^6 = 10^11
/*
int main(){
    int n,q;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> arr[i][j];
        }
    }

    cin >> q;
    while(q--){
        int a, b, c, d;
        long long sum = 0;
        for(int i=0; i<=c; i++){
            for(int j=b; j<=d; j++){
                sum += arr[i][j];
            }
        }
        cout << sum << endl;
    }
}
*/

//Optimal Approach - O(1)
int main(){
    int n,q;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> arr[i][j];
            presum[i][j] = arr[i][j] + presum[i-1][j] + presum[i][j-1] - presum[i-1][j-1];
        }
    }
    cin >> q;
    while(q--){
        int a, b, c, d;
        cout << presum[c][d] - presum[a-1][d] - presum[c][b-1] + presum[a-1][b-1]; 
    }
}