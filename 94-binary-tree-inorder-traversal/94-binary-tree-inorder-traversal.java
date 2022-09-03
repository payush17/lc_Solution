/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> inorder = new ArrayList<>();
        Stack<TreeNode> stk = new Stack<>();
        TreeNode tempnode = root;
        while (tempnode != null || stk.size() > 0)
        {
            if (tempnode != null)
            {
                stk.push(tempnode);
                tempnode = tempnode.left;
            }
            else
            {
                tempnode = stk.pop();
                inorder.add(tempnode.val);
                tempnode = tempnode.right;
            }
        }
        return inorder;
    }
}