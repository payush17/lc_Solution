class Solution
{
    public:
        int balancedStringSplit(string s)
        {
            int balancedCount = 0;
            int balancedString = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == 'R') balancedCount++;
                else
                    balancedCount--;
                if (balancedCount == 0) balancedString++;
            }
            return balancedString;
        }
};