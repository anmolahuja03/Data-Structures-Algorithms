#include<bits/stdc++.h>
using namespace std;
//T.C : O(N^2)
//S.C : O(N^2)
void replacePi(string s) {
    //Base case
    if(s.length() == 0) {
        return;
    }

    if(s[0] == 'p' && s[1] == 'i') {
        cout << "3.14";
        replacePi(s.substr(2));
    }
    else {
        cout << s[0];
        replacePi(s.substr(1));
    }
}



//T.C : O(N)
//S.C : O(N)
void replacePi(string &s, int idx = 0)
{
    if (idx == s.size())
        return;
    if (s[idx] == 'p' and s[idx + 1] == 'i')
    {
        cout << "3.14";
        replacePi(s, idx + 2);
    }
    else
    {
        cout << s[idx];
        replacePi(s, idx + 1);
    }
}

int main() {
    replacePi("anmolpipipi");
}