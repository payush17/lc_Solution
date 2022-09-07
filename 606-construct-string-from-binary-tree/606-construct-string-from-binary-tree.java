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
    public String tree2str(TreeNode root) {
        if(root==null)return "";
        StringBuilder  str = new StringBuilder();
        dfs(root,str);
        return str.toString();
    }
    public void dfs(TreeNode root,StringBuilder str){
        if(root!=null)
            str.append(root.val);
        if(root.left!=null ){
            str.append("(");
            dfs(root.left,str);
            str.append(")");
        }
        else{
            if(root.right!=null){
                str.append("(");
                str.append(")");
            }
        }
            if(root.right!=null){
                str.append("(");
                dfs(root.right,str);
                str.append(")");
            }
        }
    }
