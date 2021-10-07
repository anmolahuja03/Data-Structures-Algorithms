// Reference : https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#
class Solution
{
public:
    //Function to calculate the span of stocks price for all n days.
    vector<int> calculateSpan(int price[], int n)
    {
        stack<int> st;
        vector<int> res(n);

        st.push(0);
        res[0] = 1;

        for (int i = 1; i < n; i++)
        {
            while (!st.empty() && price[i] >= price[st.top()])
            {
                st.pop();
            }

            if (st.size() == 0)
            {
                res[i] = i + 1;
            }
            else
            {
                res[i] = i - st.top();
            }
            st.push(i);
        }
        return res;
    }
};