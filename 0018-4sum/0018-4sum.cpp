class Solution
{
    public:
        vector<vector < int>> fourSum(vector<int> &nums, int target)
        {
            vector<vector < int>> fourSum;
            int n = nums.size();

            if (nums.empty() || n < 4) return fourSum;
            

            sort(nums.begin(), nums.end());

            for (int i = 0; i < n - 3; i++)
            {

                for (int j = i + 1; j < n - 2; j++)
                {
                    long long int rem_target = (long)target - nums[j] - nums[i];
                    int low = j + 1;
                    int high = n - 1;
                    while (low < high)
                    {
                        long long int rem_sum = nums[low] + nums[high];
                        if (rem_sum < rem_target) low++;
                        else if (rem_sum > rem_target) high--;
                        else
                        {
                            vector<int> quadrup;
                            quadrup.push_back(nums[i]);
                            quadrup.push_back(nums[j]);
                            quadrup.push_back(nums[low]);
                            quadrup.push_back(nums[high]);
                            fourSum.push_back(quadrup);

                            while (low < high && nums[low] == quadrup[2] )++low;
                            while (low < high && nums[high] == quadrup[3]) --high;
                        }
                    }
                    while (j + 1 < n - 2 && nums[j] == nums[j + 1]) ++j;
                    while (i + 1 < n - 3 && nums[i] == nums[i + 1]) ++i;
                }
            }
            return fourSum;
        }
};