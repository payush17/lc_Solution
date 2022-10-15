class Solution
{
    public:
        int minCostClimbingStairs(vector<int> &cost)
        {
            vector<int> dp(cost.size() + 1, 0);

            dp[0] = 0;
            dp[1] = 0;
            for (int i = 2; i < cost.size()+1; i++)
            {

                dp[i] = min(cost[i - 1] + dp[i - 1], cost[i - 2] + dp[i - 2]);
            }

            return dp[dp.size() - 1];
        }
};