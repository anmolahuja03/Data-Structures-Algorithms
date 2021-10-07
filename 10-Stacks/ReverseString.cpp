// Reference : https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1#

char * reverse(char *S, int len)
{
    char *temp = new char[len];
    stack<char> st;

    for (int i = 0; i < len; i++)
        st.push(S[i]);

    int i = 0;
    while (!st.empty())
    {
        temp[i] = st.top();
        i++;
        st.pop();
    }

    temp[i] = '\0';
    return temp;
}