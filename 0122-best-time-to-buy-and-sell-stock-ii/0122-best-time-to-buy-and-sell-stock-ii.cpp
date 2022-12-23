class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int x, maxProfit = 0;
            for (int i = 0; i < prices.size() - 1; i++)
            {
                x = prices[i + 1] - prices[i];
                if (x > 0)
                    maxProfit += x;
            }
            return maxProfit;
        }
};