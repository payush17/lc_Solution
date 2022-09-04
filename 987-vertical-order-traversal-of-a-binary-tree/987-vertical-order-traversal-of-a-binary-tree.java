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

    public List<List<Integer>> verticalTraversal(TreeNode root) {
        TreeMap<Integer, TreeMap<Integer, PriorityQueue<Integer>>> map = new TreeMap<>();

        solve(root, map, 0, 0);

        List<List<Integer>> res = new ArrayList<>();
        for (TreeMap<Integer, PriorityQueue<Integer>> v : map.values()) {
            List<Integer> temp = new ArrayList<>();
            for (PriorityQueue<Integer> pq : v.values()) {
                while (!pq.isEmpty()) temp.add(pq.remove());
            }
            res.add(temp);
        }

        return res;
    }

    private void solve(TreeNode root, TreeMap<Integer, TreeMap<Integer, PriorityQueue<Integer>>> map, int v, int l) {
        if (root == null) return;

        map.putIfAbsent(v, new TreeMap<>());
        map.get(v).putIfAbsent(l, new PriorityQueue<Integer>());

        map.get(v).get(l).add(root.val);

        solve(root.left, map, v - 1, l + 1);
        solve(root.right, map, v + 1, l + 1);
    }
}
