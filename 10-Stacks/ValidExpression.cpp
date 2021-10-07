// Reference : https://practice.geeksforgeeks.org/problems/valid-expression1025

bool valid(string s)
{
    stack<int> st;

    for (char c : s)
    {
        if (st.empty())
            st.push(c);
        else
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.top() == '(' && c == ')')
                    st.pop();

                else if (st.top() == '{' && c == '}')
                    st.pop();

                else if (st.top() == '[' && c == ']')
                    st.pop();

                else
                    return 0;
            }
        }
    }

    if (st.empty())
        return 1;
    else
        return 0;
}