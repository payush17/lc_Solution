class Solution
{
    public:
        long long countGood(vector<int> &nums, int k)
        {
            long long res = 0;
            map<int, int> pairCnt;
            int n = nums.size();
            long cnt = 0;
            long start = 0;
            for (int i = 0; i < n; i++)
            {

                pairCnt[nums[i]]++;
                cnt += pairCnt[nums[i]] - 1;
                if (cnt >= k)
                    res += n - i;

                while (start <= i && cnt >= k)
                {
                    cnt -= pairCnt[nums[start]] - 1;
                    pairCnt[nums[start]]--;
                    if (cnt >= k)
                        res += n - i;

                    start++;
                }
            }
            return res;
        }
};