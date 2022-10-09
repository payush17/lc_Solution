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
    int currNode = Integer.MAX_VALUE;
    int min = 100000;
    public int getMinimumDifference(TreeNode root) {
        dfs(root);
        return min ;
    }
    private void dfs(TreeNode root){
        if(root==null)return;
        dfs(root.left);
        if(currNode != Integer.MAX_VALUE ){
            min = Math.min(min,root.val-currNode);
        }
        currNode = root.val;
        dfs(root.right);
    }
}