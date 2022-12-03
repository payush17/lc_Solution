class Solution
{
    public:
        static bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
        {
            if (a.second == b.second)
                return a.first > b.first;
            return (a.second < b.second);
        }

    vector<int> frequencySort(vector<int> &nums)
    {
        vector<pair<int, int>> pair;
        vector<int> sortbyfreq;
        unordered_map<int, int> map;
        for (auto x: nums)
            map[x]++;

        for (auto x: map)
        {
            pair.push_back({ x.first, x.second });
        }

        sort(pair.begin(), pair.end(), sortbysec);

     
         for (int i = 0; i < pair.size(); i++)
        {
            while (pair[i].second>0)
            {
                sortbyfreq.push_back(pair[i].first);
                pair[i].second--;
            }
        }

        return sortbyfreq;
    }
};