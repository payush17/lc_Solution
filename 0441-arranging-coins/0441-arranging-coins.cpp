class Solution
{
    public:
        int arrangeCoins(int n)
        {
            int low = 1;
            long long sum = 0;
            int high = n;
            while (low <= high)
            {
                long long mid = low + (high - low) / 2;
                sum = (mid *(mid + 1)) / 2;
                if (sum == n)
                    return mid;
                else if (sum < n)
                    low = mid + 1;
                else
                    high = mid -1;
            }
            return low-1;
        }
};