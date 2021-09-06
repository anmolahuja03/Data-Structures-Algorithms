#include<bits/stdc++.h>
using namespace std;

void reverse(string s) {
    //base case - return when string is empty
    if(s.length() == 0) {
        return;
    }
    string rest_of_string = s.substr(1);  //outputs after 1 character
    reverse(rest_of_string);
    cout << s[0];
}

int main() {
    reverse("anmol");
}