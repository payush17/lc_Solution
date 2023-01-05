class Solution
{
    public:
        int subarraySum(vector<int> &nums, int k)
        {
            unordered_map<int, int> map;
            map[0] = 1;
            int sum = 0;
            int subSum = 0;
            int ans = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                sum += nums[i];
                subSum = sum - k;
                if (map.count(subSum))
                    ans += map[subSum];
                map[sum]++;
            }
            return ans;
        }
};