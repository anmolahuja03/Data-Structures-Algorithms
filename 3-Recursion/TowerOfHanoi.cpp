#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char helper) {
    if(n == 1) {
        cout << "Move 1st disk to " << destination << " from " << source << endl;
        return;
    }
    towerOfHanoi(n - 1, source, helper, destination);
    cout << "Move " << n << "th disk to " << destination << " from " << source << endl;
    towerOfHanoi(n - 1, helper, destination, source);
}

int main() {
    towerOfHanoi(3, 'a', 'c', 'b');
}