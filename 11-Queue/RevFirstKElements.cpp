// Reference : https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue
queue<int> modifyQueue(queue<int> q, int k)
{
    int n = q.size();
    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    for (int i = 0; i < n - k; i++)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }

    return q;
}