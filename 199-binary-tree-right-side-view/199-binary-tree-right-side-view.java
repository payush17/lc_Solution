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
        List<Integer> rightTree = new ArrayList<>();
        dfs(root, rightTree, 0);
        return rightTree;
    }

    public void dfs(TreeNode root, List<Integer> rightTree, int height) {
        if (root == null) return;
        if (rightTree.size() == height) rightTree.add(root.val);
        dfs(root.right, rightTree, height + 1);//first call right
        dfs(root.left, rightTree, height + 1);
        //dfs(root.right, rightTree, height + 1);
    }
}
