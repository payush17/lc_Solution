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
        int deepestLeavesSum(TreeNode *root)
        {
            if (root == NULL) return 0;
            queue<TreeNode*> q;
            q.push(root);
            int lastleafSum = 0;
            while (!q.empty())
            {
                lastleafSum = 0;
                int lvl = q.size();
                for (int i = 1; i <= lvl; i++)
                {
                    root = q.front();
                    q.pop();
                    lastleafSum += root->val;
                    if (root->left) q.push(root->left);
                    if (root->right) q.push(root->right);
                }
            }
            return lastleafSum;
        }
};