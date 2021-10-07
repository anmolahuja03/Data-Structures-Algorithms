// Reference : https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/

//Function to push an element in queue by using 2 stacks.
void StackQueue ::push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.

//Logic : we have to pop out the element which is at the bottom of the s1.
//Popping out all the elements(except the bottom one) from s1
//and push it to s2 and then save the last element ans our answer.
//Again push all the elements from s2 to s1.

int StackQueue ::pop()
{
    if (s1.empty())
        return -1;
    int x;
    while (!s1.empty())
    {
        x = s1.top();
        s1.pop();
        s2.push(x);
    }

    int temp = s2.top();
    s2.pop();

    while (!s2.empty())
    {
        x = s2.top();
        s2.pop();
        s1.push(x);
    }

    return temp;
}
