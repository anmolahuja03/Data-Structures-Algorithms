// Reference : https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1#
// Using while loop
vector<int> rightView(Node *root)
{
    // Your Code here
    vector<int> res;
    queue<Node *> q;
    if (root == NULL)
        return res;
    q.push(root);

    while (!q.empty())
    {
        int sizee = q.size();
        Node *temp;
        while (sizee--)
        {
            temp = q.front();
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        res.push_back(temp->data);
    }
    return res;
}



// Using for loop
vector<int> leftView(Node *root)
{
    vector<int> res;
    queue<Node *> q;
    if (root == NULL)
        return res;
    q.push(root);
    while (!q.empty())
    {
        int sizee = q.size();

        for (int i = 0; i < sizee; i++)
        {
            Node *temp = q.front();
            if (i == sizee - 1)
            {
                res.push_back(temp->data);
            }
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
            q.pop();
        }
    }
    return res;
}