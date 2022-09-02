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
    public List<Double> averageOfLevels(TreeNode root) {
        List<Double> avg = new ArrayList<>();
        List<Integer> count = new ArrayList<>();
        dfs(root,0,avg,count);
        for(int i=0;i<avg.size();i++){
            avg.set(i,avg.get(i)/count.get(i));
        }
        return avg;
    }
    
    public void dfs(TreeNode root,int height,List<Double> avg,List<Integer> count){
        if(root == null) return ;
          
        if(avg.size() <= height){
            avg.add((double)root.val);
            count.add(1);
        }
        else {
            
            avg.set(height , avg.get(height)+root.val);
            count.set(height,count.get(height)+1);
        }
        dfs(root.left,height+1,avg,count);
        dfs(root.right,height+1,avg,count);
        return;
        
  
    }
 
    
}

