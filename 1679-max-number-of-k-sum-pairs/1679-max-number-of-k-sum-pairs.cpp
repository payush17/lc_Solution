class Solution
{
    public:
        int maxOperations(vector<int> &nums, int k)
        {
            int maxOp = 0;
            sort(nums.begin(), nums.end());
            int low = 0;
            int high = nums.size() - 1;
            while (low < high)
            {
                if (nums[low] + nums[high] == k)
                {
                    maxOp++;
                    low++;
                    high--;
                }
               else if (nums[low] + nums[high] < k)
                    low++;
                else
                    high--;
            }

            return maxOp;
        }
};