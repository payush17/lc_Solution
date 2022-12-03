class Solution
{
    public:
        string frequencySort(string s)
        {
            string sortedbyFreq;
            map<char, int> map;
            vector<pair<int, char>> v;
            for (auto x: s)
            {
                map[x]++;
            }
            for (auto k: map)
            {
                v.push_back({ k.second,
                    k.first });
            }
             //sort in decresing order on basis of 1st
            sort(v.begin(), v.end(), greater < > ());
                
            for (auto x: v)
            {
                while (x.first--)
                {
                    sortedbyFreq.push_back(x.second);
                }
            }

            return sortedbyFreq;
        }
};