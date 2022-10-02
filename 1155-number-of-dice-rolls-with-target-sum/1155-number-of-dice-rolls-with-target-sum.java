class Solution {
    public int numRollsToTarget(int n, int k, int target) {
     Integer[][] dp = new Integer[n + 1][target + 1];
        return dfs(n, k, target, dp);
    }
    public int dfs(int n, int k, int target, Integer[][] dp) {
        if (target < 0) {
            return 0;
        }
        if ((n == 0 && target != 0) || (n != 0 && target == 0)) {
            return 0;
        }
        if (n == 0 && target == 0) {
            return 1;
        }
        if (dp[n][target] != null) {
            return dp[n][target];
        }
        long count = 0;
        for (int i = 1; i <= k; i++) {
            count += dfs(n - 1, k, target - i, dp);
        }
        return dp[n][target] = (int) (count % 1000000007);
    }
}