// Reference : https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#
// Method 1 - Recursive

void left(Node *root, int level, int &maxLevel, vector<int>&res) {
    if(root == NULL) return;
    
    if(maxLevel < level) {
        res.push_back(root->data);
        maxLevel = level;
    }
    left(root->left, level + 1, maxLevel, res);
    left(root->right, level + 1, maxLevel, res);
}
vector<int> leftView(Node *root)
{
   vector<int> res;
   int maxLevel = 0;
   left(root, 1 , maxLevel, res);
   return res;
}


// Method 2 - Iterative
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
        res.push_back(q.front()->data);

        while (sizee--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    return res;
}