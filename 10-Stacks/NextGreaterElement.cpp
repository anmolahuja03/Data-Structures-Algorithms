// Reference : https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1#
class Solution
{
public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        vector<long long> res(n);
        stack<long long> st;

        st.push(arr[n - 1]);
        res[n - 1] = -1;

        for (int i = n - 2; i >= 0; i--)
        {
            while (st.size() > 0 && arr[i] >= st.top())
            {
                st.pop();
            }

            if (st.size() == 0)
            {
                res[i] = -1;
            }
            else
            {
                res[i] = st.top();
            }
            st.push(arr[i]);
        }
        return res;
    }
};