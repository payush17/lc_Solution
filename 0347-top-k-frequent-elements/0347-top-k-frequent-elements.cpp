class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
            unordered_map<int, int> map;
            priority_queue<pair<int, int>> pq;
            vector<int> kfreq_ele;

            for (auto x: nums)
                map[x]++;

            for (auto x: map)
            {
                pq.push({ x.second,
                    x.first });
            }
            while (k--)
            {
                kfreq_ele.push_back(pq.top().second);
                pq.pop();
            }

            return kfreq_ele;
        }
};