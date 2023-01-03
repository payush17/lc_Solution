class Solution
{
    public:
        vector<vector < int>> subsetsWithDup(vector<int> &nums)
        {
            vector<vector < int>> subset;
            int n = nums.size();
            sort(nums.begin(), nums.end());
           	//int set = 1 << n;
           	//cout << set;
            set<vector < int>> ans;
            for (int i = 0; i < (1 << n); i++)
            {

                vector<int> aa;
                for (int j = 0; j < nums.size(); j++)
                {

                    if ((i &(1 << j)) != 0)
                        aa.push_back(nums[j]);
                }
                ans.insert(aa);
            }
            for(auto x:ans)
            subset.push_back(x);
            return subset;
        }
};