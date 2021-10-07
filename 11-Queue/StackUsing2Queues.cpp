// Reference : https://practice.geeksforgeeks.org/problems/stack-using-two-queues

//Function to push an element into stack using two queues.
void QueueStack ::push(int x)
{
    // Your Code
    q1.push(x);
}

//Function to pop an element from stack using two queues.

// Logic :
//we have to pop the element which is at the last of the q1.
//Therefore we will pop out all the elements(except the last one) from q1
//and push it to q2 and then save the last element ans our answer.
//After that again push all the elements from q2 to q1.

int QueueStack ::pop()
{
    if (q1.empty())
        return -1;

    while (q1.size() != 1)
    {
        int x = q1.front();
        q1.pop();
        q2.push(x);
    }

    int temp = q1.front();
    q1.pop();

    while (!q2.empty())
    {
        int x = q2.front();
        q2.pop();
        q1.push(x);
    }
    return temp;
}