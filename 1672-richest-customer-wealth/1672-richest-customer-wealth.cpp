class Solution
{
    public:
        int maximumWealth(vector<vector < int>> &accounts)
        {
            int max_wealth = 0;
            for (int i = 0; i < accounts.size(); i++)
            {
                int curr_wealth = 0;
                for (int j = 0; j < accounts[i].size(); j++)
                {
                    curr_wealth += accounts[i][j];
                }
                if (max_wealth < curr_wealth)
                    max_wealth = curr_wealth;
            }
            return max_wealth;
        }
};