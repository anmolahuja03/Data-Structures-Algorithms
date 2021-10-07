// Brute Force - Creating an extra stack. For finding the min element
// pushing all the elements of the main stack in an extra stack and updating
// the min element at the same time. After finding the min again pushing back 
// all the elements in the main stack
// TC : Push, Pop -> O(1) ; Min -> O(n)
// SC : Push, Pop -> O(1) ; Min -> O(n) [Extra stack]

stack<int> temp;
void push(stack<int> &s, int a)
{
    s.push(a);
}

bool isFull(stack<int> &s, int n)
{
    if (s.size() == n)
        return true;
    else
        return false;
}

bool isEmpty(stack<int> &s)
{
    if (s.size() == 0)
        return true;
    else
        return false;
}

int pop(stack<int> &s)
{
    return s.top();
}

int getMin(stack<int> &s)
{
    int minn = INT_MAX;
    while (!s.empty())
    {
        int x = s.top();
        s.pop();

        if (x < minn)
        {
            minn = x;
        }
        temp.push(x);
    }
    return minn;
}

//------------------------------------------------------------------------

// Approach 2 -> Maintain an extra stack which stores just the minimum element
// Inorder to fetch the minimum element just pop the top element from minstack
// While popping, make sure that if the popped the element is equal to the top of minstack
// then remove top from min as well
// TC : Push, Pop -> O(1), Min -> O(1)
// SC : O(1) for push pop, O(n) for min

//------------------------------------------------------------------------


// Approach 3 -> Best Approach
// TC : O(1) for all
// SC : O(1) for all

int minn = INT_MAX;

void push(stack<int> &s, int a)
{
    if (s.empty())
    {
        minn = a;
        s.push(a);
    }
    else
    {
        if (a > minn)
        {
            s.push(a);
        }
        else
        {
            // to encrypt
            int temp = 2 * a - minn;
            minn = a;
            s.push(temp);
        }
    }
}

bool isFull(stack<int> &s, int n)
{
    if (s.size() == n)
        return true;
    else
        return false;
}

bool isEmpty(stack<int> &s)
{
    if (s.size() == 0)
        return true;
    else
        return false;
}

int pop(stack<int> &s)
{
    int temp = s.top();

    if (temp >= minn)
    {
        s.pop();
    }
    else
    {
        // case for encrypted, we need to decrypt back
        int x = 2 * minn - temp;
        s.pop();
        minn = x;
    }
}

int getMin(stack<int> &s)
{
    return minn;
}
