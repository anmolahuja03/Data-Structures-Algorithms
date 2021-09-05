#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcde";
    cout << s;

    string p;
    // cin >> p;
    getline(cin, p);
    cout << p << endl;

    // dynamically 
    string *st = new string;
    *st = "def";
    cout << st << endl;
    cout << *st << endl;


    string newstring = *st + p; //Concatenation
    cout << newstring.size();
    cout << newstring.length();

    cout << newstring.substr(3);  //prints everything after 3rd index
    cout << newstring.substr(3,4);
    cout << s.find("b");


}