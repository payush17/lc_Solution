class Solution
{
    public:
        vector<int> pivotArray(vector<int> &nums, int pivot)
        {
            vector<int> v(nums.size());
            int low = 0;
            int high = nums.size();
            int same = 0;
            for (auto x: nums)
            {
                if (x < pivot)
                    same++;
                if (x > pivot)
                    high--;
            }
            for (auto x: nums)
            {
                if (x < pivot)
                    v[low++] = x;
                else if (x == pivot)
                    v[same++] = x;
                else
                    v[high++] = x;
            }
            return v;
        }
};