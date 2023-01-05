class Solution
{
    public:
        bool check = true;
    int primSum(int n)
    {
        int sum = 0;int x = n;
        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                sum += i;
                n /= i;
            }
        }
        if (n > 1) sum += n;
        if (sum == x)
            check = false;
        return sum;
    }

    int smallestValue(int n)
    {
        int ans = INT_MAX;
        //if(n==4)return 4;
        int ps = n;
        while (check)
        {
            ps = primSum(ps);

            ans = min(ans, ps);
        }
        return ans;
    }
};