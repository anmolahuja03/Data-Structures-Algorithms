/*
@author Anmol Ahuja
Reference : https://leetcode.com/problems/diameter-of-binary-tree/
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + max(height(root->right), height(root->left));
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int curr = height(root->left) + height(root->right);

        int leftDia = diameterOfBinaryTree(root->left);
        int rightDia = diameterOfBinaryTree(root->right);

        return max(curr, max(leftDia, rightDia));
    }
};




// Optimized

class Solution
{
public:
    int res = 0;

    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int lh = height(root->left);
        int rh = height(root->right);
        res = max(res, 1 + lh + rh);

        return 1 + max(lh, rh);
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        int data = height(root);
        return res - 1;
    }
};