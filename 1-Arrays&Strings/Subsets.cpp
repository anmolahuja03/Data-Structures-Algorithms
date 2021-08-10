#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[] = {1, 5, 2, 1, 5, 7};
    vector<int> arr = {1, 5, 2, 1, 5, 7};
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }

    if(binary_search(arr.begin(), arr.end(),5)){
        cout << "Present";
    }
    else {
    cout << "Absent";
    }
    return 0;
}