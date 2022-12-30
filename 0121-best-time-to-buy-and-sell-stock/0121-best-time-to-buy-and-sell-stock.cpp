class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int maxProfit = 0, min = INT_MAX;
            for (int i = 0; i < prices.size(); i++)
            {
                if (prices[i] < min) min = prices[i];
                else if (prices[i] > min) maxProfit = max(prices[i] - min, maxProfit);
            }
            return maxProfit;
        }
};