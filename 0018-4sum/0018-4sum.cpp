class Solution
{
    public:
        vector<vector < int>> fourSum(vector<int> &nums, int target)
        {
            int n = nums.size();
            sort(nums.begin(), nums.end());
            vector<vector < int>> ans;

            for (int i = 0; i < n - 3; ++i)
            {
                for (int j = i + 1; j < n - 2; ++j)
                {
                    long long int tar = (long)target - nums[j] - nums[i];

                    int k = j + 1, l = n - 1;
                    while (k < l)
                    {
                        if (nums[k] + nums[l] == tar)
                        {
                            ans.push_back({ nums[i], nums[j],nums[k],nums[l] });
                            while (k < l && nums[k] == nums[k + 1])
                                k++;
                            while (k < l && nums[l] == nums[l - 1])
                                l--;
                            k++;
                            l--;
                        }
                        else if (nums[k] + nums[l] < tar)
                            k++;
                        else
                            l--;
                    }
                    while (j < n - 2 && nums[j] == nums[j + 1])
                        j++;
                }
                while (i < n - 3 && nums[i] == nums[i + 1])
                    i++;
            }
            return ans;
        }
};