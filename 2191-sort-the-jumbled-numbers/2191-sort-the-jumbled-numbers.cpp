class Solution
{
    public:
       
    vector<int> sortJumbled(vector<int> &m, vector<int> &nums)
    {

        vector<pair<int, int>> v;
        vector<int> sorted;
        for (int i = 0; i < size(nums); i++)
        {
            string s = to_string(nums[i]);
            string str = "";
            for (int j = 0; j < s.length(); j++)
            {
                str += to_string(m[s[j] - '0']);
            }

            
           v.push_back({stoi(str),i});
        }
        sort(begin(v),end(v));
        for (int i = 0; i < v.size(); i++)
        {
            sorted.push_back (nums[v[i].second]);
        }

        return sorted;
    }
};