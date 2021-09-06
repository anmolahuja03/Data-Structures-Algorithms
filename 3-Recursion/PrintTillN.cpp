#include<bits/stdc++.h>
using namespace std;

void printdec(int n) {
    if(n == 0) return;
    cout << n << " ";
    printdec(n-1);
}  // 5 4 3 2 1

void printinc(int n) {
    if(n == 0) return;
    printinc(n-1);
    cout << n << " ";
}  // 1 2 3 4 5 

int main() {
    printdec(5);
    cout << endl;
    printinc(5);
    return 0;
}