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

        for (auto p: pair)
        {

            for (int i = 0; i < p.second; i++)
            {
                sortbyfreq.push_back(p.first);
            }
        }

        return sortbyfreq;
    }
};