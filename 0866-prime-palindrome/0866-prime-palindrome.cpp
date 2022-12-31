class Solution
{
    public:
        bool ispalindrome(int n)
        {
            string s = to_string(n);
            int i = 0;
            int l = s.size() - 1;
            while (i <= l)
            {
                if (s[i] != s[l])
                    return false;
                i++;
                l--;
            }
            return true;
        }
    bool isprime(int n)
    {
        if (n == 1)
            return false;
        for (int i = 2;(long) i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int primePalindrome(int n)
    {
        if(9989900 <=n)return 100030001;
        for (int i = n; i < 1e8; i++)
        {
            if (isprime(i))
            {
                if (ispalindrome(i))
                {
                    return i;
                }
            }
        }
        return 0;
    }
};