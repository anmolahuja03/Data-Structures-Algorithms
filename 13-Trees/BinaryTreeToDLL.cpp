// Reference : https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1#
class Solution
{
public:
    //Function to convert binary tree to doubly linked list and return it.
    void solve(Node *root, Node *&head, Node *&prev, int &flag)
    {
        if (root == NULL)
            return;
        solve(root->left, head, prev, flag);
        if (flag == true)
        {
            flag = false;
            head = root;
            prev = root;
        }
        else
        {
            prev->right = root;
            prev->right->left = prev;
            prev = prev->right;
        }
        solve(root->right, head, prev, flag);
    }

    Node *bToDLL(Node *root)
    {
        Node *head = NULL;
        Node *prev = NULL;
        int flag = true;
        solve(root, head, prev, flag);
        return head;
    }
};
