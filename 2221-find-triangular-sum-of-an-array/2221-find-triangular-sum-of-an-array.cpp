class Solution
{
    public:
        int triangularSum(vector<int> &nums)
        {

            while (nums.size() > 1)
            {
                for (int i = 1; i < nums.size(); i++)
                {
                    int x = nums[i - 1] + nums[i];
                    if (x > 9)
                    {
                        x = x % 10;
                    }
                    nums[i - 1] = x;
                }
                nums.pop_back();
            }

            return nums[0];
        }
};