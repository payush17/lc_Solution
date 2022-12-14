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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        List<List<Integer>> res = new LinkedList<>();
        if(root==null)return res;
        q.add(root);
        boolean flag = false;
        while(q.size()>0){
            int size = q.size();
            LinkedList <Integer> list = new LinkedList<>();
            for(int i=0;i<size;i++){
                TreeNode node = q.poll();
                if(node.left!=null)q.add(node.left);
                if(node.right!=null)q.add(node.right);
                if(flag)
                    list.addFirst(node.val);
                else
                    list.add(node.val);
            }
            flag= !flag;
            res.add(list);
        }
        return res;
        
    }
}