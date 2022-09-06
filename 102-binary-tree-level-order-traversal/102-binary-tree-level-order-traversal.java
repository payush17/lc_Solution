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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> lot = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        if(root==null)return lot;
        q.offer(root);
        while(q.size()>0){
            List<Integer> list = new ArrayList<>();
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode node = q.poll();
                list.add(node.val);
                if(node.left!=null)
                    q.offer(node.left);
                if(node.right!=null)
                    q.offer(node.right);
            }
            lot.add(list);
            
        }
        return lot;
    }
}