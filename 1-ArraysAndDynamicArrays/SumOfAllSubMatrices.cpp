#include<bits/stdc++.h>
using namespace std;

int SumofMatrix(int arr[][n]){
    int i, j, sum = 0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            sum += arr[i][j] * (i+1) * (j+1) * (n-1) * (n-j);
        }
    }
    return sum;
}

int main(){
    int n = 3;
    int arr[][n] = {{ 3, 6, 1 },{ 1, 7, 7 },{ 8, 1, 9 }};
    cout << SumofMatrix(arr);
    return 0;
}