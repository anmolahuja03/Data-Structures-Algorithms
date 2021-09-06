#include<bits/stdc++.h>
using namespace std;

// Total Subsequence of a string = 2^n

void subseq(string s, string ans) {]
    if(s.length() == 0) {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string restofstring = s.substr(1);

    subseq(restofstring, ans);
    subseq(restofstring, ans+ch);
}

int main() {
    subseq("ABC", "");
    cout << endl;
}