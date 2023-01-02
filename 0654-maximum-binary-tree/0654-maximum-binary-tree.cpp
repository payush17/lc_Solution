/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        TreeNode* constructMaximumBinaryTree(vector<int> &nums)
        {
            if (nums.empty())
                return nullptr;

            int maxele = nums[0];
            int index = 0;
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] > maxele)
                {
                    maxele = nums[i];
                    index = i;
                }
            }
            vector<int> leftB;

            for (int i = 0; i < index; i++)
            {
                leftB.push_back(nums[i]);
            }

            vector<int> rightB;
            for (int i = index + 1; i < nums.size(); i++)
            {
                rightB.push_back(nums[i]);
            }
            TreeNode *root = new TreeNode(maxele);
            root->left = constructMaximumBinaryTree(leftB);
            root->right = constructMaximumBinaryTree(rightB);
            return root;
        }
};