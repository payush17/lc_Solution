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

    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> rightView = new ArrayList<>();
         if (root == null) return rightView;
        Queue<TreeNode> q = new LinkedList<TreeNode>();
        q.offer(root);
        while(!q.isEmpty()){
            int size = q.size();
            while(size>0){
                TreeNode curr = q.poll();
                if(size==1){
                    rightView.add(curr.val);
                }
                if(curr.left != null){
                    q.offer(curr.left);
                } 
                if(curr.right != null){
                    q.offer(curr.right);
                } 
                size--;
            }
        }
        return rightView;
    }
}
