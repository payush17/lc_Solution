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

    public int pseudoPalindromicPaths(TreeNode root) {
       // HashSet<Integer> set = new HashSet<>();
        int ans = dfs(root, new HashSet<>());
        return ans;
    }

    public int dfs(TreeNode root,HashSet<Integer> set) {
        if (root == null) return 0;
        if (!set.contains(root.val))
            set.add(root.val);
        else 
            set.remove(root.val);

        if (root.left == null && root.right == null) 
            return set.size() <= 1 ? 1 : 0;
        
        int left = dfs(root.left, new HashSet<>(set));
        int right = dfs(root.right, new HashSet<>(set));
        return left + right;
    }
}
