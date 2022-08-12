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
    public int diameterOfBinaryTree(TreeNode root) {
        int [] dmetr = new int [1];
        finddia(root,dmetr);
        return dmetr[0];
    }
    public int finddia(TreeNode root,int [] ans){
        if(root==null)
            return 0;
        int lh = finddia(root.left,ans);
        int rh = finddia(root.right,ans);
        ans[0] = Math.max(ans[0],lh+rh);
        return Math.max(lh,rh)+1;
    }
}