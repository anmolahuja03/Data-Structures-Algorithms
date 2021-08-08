#include<bits/stdc++.h>
using namespace std;


void printVector(vector<int> &v){
    for(int i = 0; i < v.size(); ++i){
       // cout << v[i].first << " " << v[i].second << endl;
       cout << v[i] << " ";
    }
    cout << endl;
}

//VECTOR OF PAIR
// int main()
// {
//     vector<pair<int,int>> v; // = {{1,2}, {2,3}, {3,4}};    //vector of pair, here v[0], v[1]... will be a pair
//   //printVector(v);
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; ++i){
//         int x,y;
//         cin >> x >> y;
//         v.push_back({x,y});               // or v.push_back(make_pair(x,y));
//     }
//     printVector(v);
// }


//ARRAY OF VECTORS  - (No of rows fixed, no of clumns can be dynamic)
// int main()
// {
//     int N;
//     cin >> N;
//     vector<int> v[N];                     //N vectors of size 0
//     for(int i = 0; i < N; ++i){
//         int n;
//         cin >> n;
//         for(int j = 0; j < n; ++j){
//             int x;
//             cin >> x;
//             v[i].push_back(x);
//         }
//     }
    
//     for(int i = 0; i < N; ++i){
//         printVector(v[i]);
//     }
//     cout << v[0][0];                      //prints 0th element of vector 0
// }



//VECTORS OF VECTORS - sort of 2d vectors (No of rows also dynamic, no of colums dynamic)
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;           //initializing vector of vector 
    for(int i = 0; i < N; ++i){
        int n;
        cin >> n;
        vector<int> temp;
        for(int j = 0; j < n; ++j){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i = 0; i < v.size(); ++i){
        printVector(v[i]);
    }
    cout << v[0][1];    
}