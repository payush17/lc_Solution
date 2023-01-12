/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int dfs(TreeNode *root,int &leftSum)
        {
           
            if (root == NULL) return 0;

            if (root->left!=NULL and root->left->left == NULL and root->left->right == NULL)
            {

                leftSum += root->left->val;
            }

            dfs(root->left,leftSum);
            dfs(root->right,leftSum);

            return leftSum;
        }
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root->left == NULL && root->right == NULL)
            return 0;
        int leftleafSum =0;
        leftleafSum  = dfs(root,leftleafSum);
        return leftleafSum;
    }
};