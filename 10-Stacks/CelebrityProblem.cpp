// Reference : https://practice.geeksforgeeks.org/problems/the-celebrity-problem
// There can be max one celeb only.
class Solution
{
public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        // creating a stack & pushing all
        // the indices
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            st.push(i);
        }

        // popping top 2 elements until left with 
        // one element
        while (st.size() >= 2)
        {
            int i = st.top();
            st.pop();
            int j = st.top();
            st.pop();

            if (M[i][j] == 1)
            {               // i can not be the celeb
                st.push(j); // eliminating i, pushing back j
            }
            else
            {               // j can not be the celeb
                st.push(i); // eliminating j, pushing back i
            }
        }

        // Now, we have eliminated the ones for which we are sure
        // that they cannot be the celebrity. But this doesn't gurantees
        // that the element present will be celebrity or not.
        // Hence, checking for it to be sure

        // When we will be sure ?
        // 1. If in the celebs row everthing is 0 and
        // 2. if in columns everything is 1 except celebs row

        int celeb = st.top();

        for (int i = 0; i < n; i++)
        {
            if (i != celeb)
            {
                if (M[i][celeb] == 0 || M[celeb][i] == 1)
                {
                    return -1;
                }
            }
        }
        return celeb;
    }
};