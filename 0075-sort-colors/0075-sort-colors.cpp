class Solution
{
    public:
        void sortColors(vector<int> &nums)
        {
            int cnt0 = -1, cnt1 = -1, cnt2 = -1;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == 0)
                {
                    nums[++cnt2] = 2;
                    nums[++cnt1] = 1;
                    nums[++cnt0] = 0;
                }
                else if (nums[i] == 1)
                {
                    nums[++cnt2] = 2;
                    nums[++cnt1] = 1;
                }
                else
                {
                    nums[++cnt2] = 2;
                }
            }
        }
};