// Reference : https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1#

vector<int> diagonal(Node *root)
{
    // your code here
    vector<int> res;
    queue<Node *> q;
    if (!root)
        return res;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        while (temp)
        {
            if (temp->left)
                q.push(temp->left);
            res.push_back(temp->data);
            temp = temp->right;
        }
    }
    return res;
}