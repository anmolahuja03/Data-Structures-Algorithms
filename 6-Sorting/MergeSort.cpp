#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &array, int s, int e) {
    int i = s;
    int m = (s+e)/2;
    int j = m + 1;

    vector<int> temp;

    while(i <= m and j <= e) {
        if(array[i] < array[j]) {
            temp.push_back(array[i]);
            i++;
        }
        else {
            temp.push_back(array[j]);
            j++;
        }
    }

    // copy remaining elements from first array 
    while(i <= m) {
        temp.push_back(array[i++]);
    }

    // or copy remaining elements from second array 
    while(j <= e) {
        temp.push_back(array[j++]);
    }

    // copy remaining elements from temp to original array 
    int k = 0;
    for(int index = s; index <= e; index++) {
        array[index] = temp[k++];
    }
    return;
}

void mergesort(vector<int> &arr, int s, int e) {
    //base case 
    if(s >= e) {
        return;
    }

    //recursive case
    int mid = (s+e)/2;
    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);
    return merge(arr, s, e);
}

int main() {
    vector<int> arr {10, 9, 8, 7, 6, 5};

    int s = 0;
    int e = arr.size()-1;
    mergesort(arr,s,e);

    for(int x : arr) {
        cout << x << " ";
    }
}