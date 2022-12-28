class Solution
{
    public:
        int firstMissingPositive(vector<int> &nums)
        {
            long long n = nums.size();
            long long i = 0;

            while (i < n)
            {
                   long long correctIdx = (long long)(nums[i]) - 1;
                if (nums[i] > 0 && nums[i] < n && nums[i] != nums[correctIdx])
                {
                    swap(nums[i], nums[correctIdx]);
                }
                else i++;
            }

            for (i = 0; i < n; i++)
            {
                if (nums[i] != i + 1)
                {
                    return i + 1;
                }
            }

            return n + 1;
        }
};