class Solution
{
    public:
        int reverse(int x)
        {
            long long rev_Num = 0;
            while (x)
            {
                int curr = x % 10;
                rev_Num = rev_Num * 10 + curr;
                if (rev_Num > INT_MAX || rev_Num < INT_MIN)
                    return 0;

                x /= 10;
            }
            int ans = rev_Num;
            return ans;
        }
};