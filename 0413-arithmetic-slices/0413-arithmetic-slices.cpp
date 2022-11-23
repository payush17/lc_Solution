class Solution
{
    public:
        int numberOfArithmeticSlices(vector<int> &nums)
        {
            if (nums.size() < 3) return 0;
            int subarray = 0;
            int curr_sub = 0;
            vector<int> dp (nums.size()+1);
            for (int i = 1; i < nums.size() - 1; i++)
            {
                if ((nums[i] - nums[i - 1]) == (nums[i + 1] - nums[i]))
                {
                   dp[i]= dp[i-1]+1;
                    subarray += dp[i];
                }
               
            }
            return subarray;
        }
};