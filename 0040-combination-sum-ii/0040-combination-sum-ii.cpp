class Solution
{
    public:
        void dfs(vector<int> &arr, int i, int tar, vector<int>asum, vector< vector< int>> &ans)
        {
            if (tar < 0)
                return;
            if (tar == 0)
            {
                ans.push_back(asum);
                return;
            }

            for (int j = i; j < arr.size(); ++j)
            {
                if (j != i && arr[j] == arr[j - 1])
                    continue;
                asum.push_back(arr[j]);
                dfs(arr, j + 1, tar - arr[j], asum, ans);
                asum.pop_back();
            }
        }

    vector<vector < int>> combinationSum2(vector<int> &arr, int target)
    {
        vector<vector < int>> ans;
        sort(arr.begin(), arr.end());
        dfs(arr, 0, target, {}, ans);
        return ans;
    }
};