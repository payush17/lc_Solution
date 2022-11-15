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
        int countNodes(TreeNode *root)
        {
            if (root == NULL) return 0;
            int leftcnt = 0;
            int rightcnt = 0;
            TreeNode *lefttree = root;
            TreeNode *righttree = root;
            while (lefttree != NULL)
            {
                leftcnt++;
                lefttree = lefttree->left;
            }
            while (righttree != NULL)
            {
                rightcnt++;
                righttree = righttree->right;
            }
            if (leftcnt == rightcnt)
                return pow(2, leftcnt) - 1;

            return 1+ countNodes(root->left) + countNodes(root->right) ;
        }
};