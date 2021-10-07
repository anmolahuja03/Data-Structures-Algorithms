class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack, int cnt = 0)
    {
        if(s.empty() || cnt == sizeOfStack)
        return;
        
        int temp = s.top();
        s.pop();
        deleteMid(s, sizeOfStack, cnt + 1);
        
        if(cnt != sizeOfStack/2)
        s.push(temp);
    }
};