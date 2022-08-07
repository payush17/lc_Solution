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
    public boolean isSubtree(TreeNode root, TreeNode subRoot) {
        if(root==null)
            return false;
        return subfun(root,subRoot) || isSubtree(root.left,subRoot)||isSubtree(root.right,subRoot);
        
    }
    public boolean subfun(TreeNode a,TreeNode b){
        if(a==null && b==null)return true;
         if(a==null || b==null)return false;
        
        return (a.val==b.val) && subfun(a.left,b.left) && subfun(a.right,b.right);
    }
}
