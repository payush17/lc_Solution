/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public List<List<Integer>> levelOrder(Node root) {
        List<List<Integer>> lot = new ArrayList<>();
        if(root==null)return lot ;
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int n = q.size();
            List<Integer> list = new ArrayList<>();
            while(n-- >0){
                Node node = q.poll();
                int v = node.val;
                List<Node> child = new ArrayList<>();
                child = node.children;
                list.add(v);
                
                for(Node x : child)
                    q.add(x);
                
            }
            lot.add(list);
            
         
        }
        return lot;
    }
}