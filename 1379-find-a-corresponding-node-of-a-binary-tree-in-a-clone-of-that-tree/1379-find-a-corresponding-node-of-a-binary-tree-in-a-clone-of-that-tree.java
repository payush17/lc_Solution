/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
       Queue<TreeNode> queue = new LinkedList<>();
        queue.offer(cloned);
        
        while (!queue.isEmpty()) {
            TreeNode x = queue.poll();
            if (x.val == target.val) {
                return x;
            }
            
            if (x.left != null) queue.offer(x.left);
            if (x.right != null) queue.offer(x.right);
        }
        
        return null;
    }
}