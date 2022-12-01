class Solution
{
    public:
        bool isvowel(char ch)
        {
            char c = tolower(ch);

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                return true;
            return false;
        }
    bool halvesAreAlike(string s)
    {
        int n = s.length() / 2;
        int vc1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (isvowel(s[i])) vc1++;

            if (isvowel(s[i + n])) vc1--;
        }
        return vc1 == 0;
    }
};