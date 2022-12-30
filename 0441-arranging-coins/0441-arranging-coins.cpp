class Solution
{
    public:
        int arrangeCoins(int n)
        {
            long i = 1;
            long long sum = 1;
            if(n==1)return 1;
            while (sum <= n)
            {
                i++;
                sum = (i *(i + 1)) / 2;
                
             
            }
            return i - 1;
        }
};