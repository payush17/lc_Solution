class Solution
{
    public:
        int wateringPlants(vector<int> &plants, int capacity)
        {
            int ans = 0;
            int cap = capacity;
            for (int i = 0; i < plants.size(); i++)
            {
                if (cap >= plants[i])
                {
                    cap -= plants[i];
                    ans ++;
                    cout<<cap<<" ";
                    
                }
                else
                {
                    cap = capacity;
                    ans += 2 *i + 1;
                    //cout<<ans<<" ";
                    cap -= plants[i];
                }
            }
            return ans;
        }
};