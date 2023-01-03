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
        int sum(TreeNode* root,int &nodeCnt){
            if(root==NULL)
               return 0;
            nodeCnt++;
            int leftval = sum(root->left,nodeCnt);
            int rightval = sum(root->right,nodeCnt);
            return (root->val + leftval + rightval);
        }
        void dfs(TreeNode *root, int &avgCnt)
        {
            if (root == NULL)
                return;
            int nodeCnt = 0;
            int avg = (sum(root, nodeCnt)) / nodeCnt;
            if (avg == root->val) avgCnt++;
            dfs(root->left, avgCnt);
            dfs(root->right, avgCnt);
        }

    int averageOfSubtree(TreeNode *root)
    {
        int avgCnt = 0;
        dfs(root, avgCnt);
        return avgCnt;
    }
};