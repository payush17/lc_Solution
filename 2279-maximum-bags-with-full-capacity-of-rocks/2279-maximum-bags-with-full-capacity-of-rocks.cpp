class Solution
{
    public:
        int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks)
        {
          long long tot_cap = 0;
            for (auto i: capacity)
            {
                tot_cap += i;
            }
            if (additionalRocks >= tot_cap)
                return capacity.size();

            vector<int> v(rocks.size(), -1);
            for (int i = 0; i < rocks.size(); i++)
            {
                v[i] = capacity[i] - rocks[i];
            }
             sort(v.begin(),v.end());
            for (int i = 0; i < rocks.size(); i++)
            {
                additionalRocks -= v[i];
                if (additionalRocks >= 0)
                    v[i] = 0;
                else
                break;
            }
           
            
        
    int ans = 0;
    for (auto x: v)
    {
        if (x == 0) ans++;
    }

    return ans;
}
};