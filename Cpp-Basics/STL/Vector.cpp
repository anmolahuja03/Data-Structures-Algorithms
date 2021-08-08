// # Vectors - continous memory blocks (arrays of dynamic size)
// v.push_back - last me value dalta hai   [ O(1)]
// v.pop_back - last se value nikalta hai

#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;         //initialization without size
  //vector<int> v1 (10,3); //vector size of 10, with all values 3   
  //vector<int> v2 (3);    //initialization with size 
    int n;           
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        printVector(v);
        v.push_back(x);      //value added at end [ O(1)]
      //v.pop_back(x);          removes last element
      //vector<int> v2 = v;     v2 will be the exact copy of v - changes in v2 won't be reflected in v  [ O(n)]
      //vector<int> &v2 = v;    passing as reference it doesn't makes copy here 
    }
    printVector(v);

}
