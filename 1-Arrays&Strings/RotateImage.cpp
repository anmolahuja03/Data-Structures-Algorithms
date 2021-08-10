class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //We have to rotate matrix clockwise 90 degree
        //Brute Force Approach - to use one more matrix
        //change 1st row ---> last col, 2nd row ---> 2nd last col, 3rd row ---> 3rd last col
        //TC - O(N^2) , SC - O(N^2)
        
        //Effecient Approach
        //1-Transpose,2-Reverse Row
        //TC - O(N^2) , SC - O(1)
        
        int n = matrix.size();
        
        //Transposing the matrix
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        
        //Reversing the rows
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }        
    
    }
};