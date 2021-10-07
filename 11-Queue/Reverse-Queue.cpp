// Reference : https://practice.geeksforgeeks.org/problems/queue-reversal
// Function to reverse the queue.
// Approach 1 : Iterative Approach
queue<int> rev(queue<int> q)
{
    stack<int> st;
    
    while(q.empty() == false) {
        st.push(q.front());
        q.pop();
    }
    
    while(st.empty() == false) {
        q.push(st.top());
        st.pop();
    }
    return q;
}



// Approach 2 : Recursive Approach
void reverse(queue<int> &q) {
    if(q.empty()){
        return;
    }
    int temp = q.front();
    q.pop();
    reverse(q);
    q.push(temp);
}

queue<int> rev(queue<int> q)
{
    reverse(q);
    return q;
}