class Solution
{
    public:
        vector<vector < int>> subsets(vector<int> &nums)
        {
            vector<vector < int>> subsets;
            int n = nums.size();
            int subset_cnt = (1<<n);
            for (int i = 0; i < subset_cnt; i++)
            {
                vector<int> subset;
                for (int j = 0; j < n; j++)
                {
                    if((i &(1<<j)) != 0)
                        subset.push_back(nums[j]);
                }
                subsets.push_back(subset);
            }
            return subsets;
        }
};