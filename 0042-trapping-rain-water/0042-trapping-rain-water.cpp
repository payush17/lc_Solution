class Solution
{
    public:
        int trap(vector<int> &h)
        {
            int n = h.size();
            if (n <= 1)
                return 0;
            int ans = 0;
            int i = 0, j = n - 1;
            int left = h[0], right = h[n - 1];

            while (i <= j)
            {
                left = max(left, h[i]);
                right = max(right, h[j]);

                if (min(left, right) >= h[i])
                    ans += min(left, right) - h[i];

                if (min(left, right) >= h[j])
                    ans += min(left, right) - h[j];

                if (h[i] < h[j])
                    i++;
                else
                    j--;
            }

            return ans;
        }
};