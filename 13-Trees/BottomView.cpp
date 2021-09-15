// Reference : https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1#
vector<int> bottomView(Node *root)
{
    map<int, int> mpp;
    queue<pair<Node *, int>> q;
    vector<int> res;
    if (!root)
        return res;
    q.push({root, 0});

    while (!q.empty())
    {
        Node *temp = q.front().first;
        int line = q.front().second;
        q.pop();
        mpp[line] = temp->data;
        if (temp->left)
            q.push({temp->left, line - 1});
        if (temp->right)
            q.push({temp->right, line + 1});
    }

    for (auto x : mpp)
    {
        res.push_back(x.second);
    }
    return res;
}