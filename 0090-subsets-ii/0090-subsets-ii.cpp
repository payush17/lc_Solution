class Solution
{
    public:
        void dfs(vector<int> &nums, int i, vector<vector< int >> &subset, vector< int > ans)
        {
            subset.push_back(ans);

            for (int k = i; k < nums.size(); k++)
            {
                if (k != i && nums[k] == nums[k - 1]) 
                    continue;
                ans.push_back(nums[k]);
                dfs(nums, k + 1, subset, ans);
                ans.pop_back();
            }
        }
    vector<vector < int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector < int>> subset;
        dfs(nums, 0, subset, {});
        return subset;
    }
};