#include <bits/stdc++.h>
using namespace std;


void generateP(string output, int n, int open, int close, int i)
{
    //base case
    if(i == 2*n)
    {
        cout << output << endl;
        return;
    }

    //open
    if(open<n)
    {
        generateP(output + '(', n, open+1, close, i+1);
    }

    //closing
    if(close<open)
    {
        generateP(output + ')', n, open, close+1, i+1);
    }
}

int main()
{
    string output;
    int n;
    cin >> n;
    generateP(output, n, 0, 0, 0);

    return 0;
}