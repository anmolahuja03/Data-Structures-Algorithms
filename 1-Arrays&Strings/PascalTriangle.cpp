#include<bits/stdc++.h>
using namespace std; 

void Pascal(int n)
{
    // Output matrix
    vector<vector<int>> output;
    output.push_back({1});
    for(int i=1; i<n; i++)
    {
        vector<int> temp;             // to store each row of the trianle
        for(int j=0; j<=i; j++)
        {
            if(i==0 ||j==0 || i==j)
            temp.push_back(1);
            else
            {
                int sum = output[i-1][j-1] + output[i-1][j];
                temp.push_back(sum);
            }
        }
        output.push_back(temp);
        temp.clear();
    }

    for(int i=0; i<n; i++)
    {
        for(auto val : output[i])
        {
            cout << val << " ";
        }
        cout << endl;

    }

}

int main()
{
    Pascal(6);
    return 0;
}