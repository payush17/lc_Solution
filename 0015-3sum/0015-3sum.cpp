class Solution
{
    public:
        vector<vector < int>> threeSum(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
            vector<vector<int>> threeSum;

            for (int i = 0; i < nums.size() - 2; i++)
            {
                if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
                {
                    int low = i + 1, hi = nums.size() - 1, sum = 0 - nums[i];

                    while (low < hi)
                    {
                        if (nums[low] + nums[hi] == sum)
                        {
                            vector<int> v(3);
                            v[0] = nums[i], v[1] = nums[low], v[2] = nums[hi];

                            threeSum.push_back(v);
                            while (low < hi && nums[low] == nums[low + 1]) low++;
                            while (low < hi && nums[hi] == nums[hi - 1]) hi--;
                            low++;
                            hi--;
                        }
                        else if (nums[low] + nums[hi] < sum) low++;
                        else hi--;
                    }
                }
            }
            return threeSum;
        }
};