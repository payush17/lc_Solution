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
    public List<String> binaryTreePaths(TreeNode root) {
        List<String> s = new ArrayList<>();
       if(root!=null)findpath(root,"",s);
        return s;
        
    }
    public void findpath(TreeNode root,String path,List<String> s){
        if(root.left==null  && root.right==null)s.add(path + root.val);
        if(root.left!=null)findpath(root.left,path+root.val+"->",s);
         if(root.right!=null)findpath(root.right,path+root.val+"->",s);
        
    }
}