class Solution
{
    public:
        int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks)
        {
            long long tot_cap = 0;
            int ans = 0;
            for (auto i: capacity)
            {
                tot_cap += i;
            }
            if (additionalRocks >= tot_cap)
                return capacity.size();

           	//vector<int> v(rocks.size(), -1);
            for (int i = 0; i < rocks.size(); i++)
            {
                capacity[i] = capacity[i] - rocks[i];
            }
            sort(capacity.begin(), capacity.end());
            int i;
            for (i = 0; i < rocks.size(); i++)
            {
                additionalRocks -= capacity[i];
                if (additionalRocks < 0)
                {
                    break;
                }
            }

            return i;
        }
};