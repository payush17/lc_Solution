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
class Solution {
public:
    TreeNode * new_tree = new TreeNode(0);
    TreeNode * curr = new_tree;
    TreeNode* increasingBST(TreeNode* root) {
        dfs(root);
        return curr-> right;
    }
    void dfs(TreeNode * root){
        if(root == NULL)return;
        dfs(root->left);
        new_tree-> right = new TreeNode(root->val);
        new_tree-> left = NULL;
        new_tree= new_tree->right;
        dfs(root->right);
        
    }
};