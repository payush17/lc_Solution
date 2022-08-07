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
    public TreeNode invertTree(TreeNode root) {
         if(root==null)
            return null;
         TreeNode curr = root.left;
        TreeNode curr1 = root.right;
       
        root.left = invertTree(curr1);
        root.right = invertTree(curr);
        return root;
        
        
    }
}