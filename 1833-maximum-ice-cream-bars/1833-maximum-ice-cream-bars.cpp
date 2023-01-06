class Solution
{
    public:
        int maxIceCream(vector<int> &costs, int coins)
        {
            sort(costs.begin(), costs.end());
            int maxCream = 0;
            for (int i = 0; i < costs.size(); i++)
            {
                if (costs[i] <= coins)
                {
                    coins -= costs[i];
                    maxCream++;
                }
            }
            return maxCream;
        }
};