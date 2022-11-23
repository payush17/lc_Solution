class Solution
{
    public:
        int numberOfArithmeticSlices(vector<int> &nums)
        {
            if (nums.size() < 3) return 0;
            int subarray = 0;
            int curr_sub = 0;
            for (int i = 1; i < nums.size() - 1; i++)
            {
                if ((nums[i] - nums[i - 1]) == (nums[i + 1] - nums[i]))
                {
                    curr_sub++;
                    subarray += curr_sub;//previous 3 also in AP
                }
                else
                    curr_sub = 0;
            }
            return subarray;
        }
};