class Solution
{
    public:
        long long countBadPairs(vector<int> &nums)
        {
            long long ans = 0;
            long long n = nums.size();
            unordered_map < long long int, long long int > map;
            for (int i = 0; i < n; i++)
            {
                map[nums[i] - i]++;
            }
            for (auto x: map)
            {
                long long y = x.second;
                ans += ((y-1)*y)/2;
            }
            return ((n*(n - 1)) / 2) - ans;
        }

};