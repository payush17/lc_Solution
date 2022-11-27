class Solution
{
    public:
        int totalsum(int x)
        {
            x = x *(x + 1);
            return x / 2;
        }
    int pivotInteger(int n)
    {
        int low = 1;
        int high = n;
        int sum = (n *(n + 1)) / 2;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int lc = totalsum(mid);

            int curr = (sum - lc + mid);

            if (lc == curr)
                return mid;
            if (curr > lc)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};