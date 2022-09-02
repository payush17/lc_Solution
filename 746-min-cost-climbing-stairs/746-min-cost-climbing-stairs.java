class Solution {

    public int minCostClimbingStairs(int[] cost) {
        int n = cost.length;
      //  int[] dp = new int[n + 1];
         int curr;int t1=0;int t2=0;
        
        for (int i = 2; i <= n; i++) {
            curr = Math.min(t1 + cost[i - 1], t2+ cost[i - 2]);
            t2 = t1;
            t1= curr;
        }
        return t1;
    }
}
