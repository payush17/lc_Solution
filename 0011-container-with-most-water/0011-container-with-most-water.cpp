class Solution
{
    public:
        int maxArea(vector<int> &h)
        {
            int maxArea = 0;
            int ans = 0;
            int left = 0, right = h.size() - 1;
            while (left < right)
            {
                if (h[left] <= h[right])
                {
                    ans = (h[left]) *(right - left);
                    left++;
                }
                else
                {
                    ans = h[right] *(right - left);
                    right--;
                }
                maxArea = max(maxArea, ans);
            }
            return maxArea;
        }
};