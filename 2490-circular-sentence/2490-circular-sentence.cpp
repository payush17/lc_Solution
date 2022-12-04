class Solution
{
    public:
        bool isCircularSentence(string s)
        {
       
            int string_len = s.length();
          
            if ((s[0]) != (s[string_len - 1]))
                return false;

            for (int i = 1; i < string_len; i++)
            {
                if (isspace(s[i]))
                {
                    char c1 = (s[i - 1]);
                    char c2 = (s[i + 1]);

                    if (c1 != c2)
                        return false;
                }
            }

            return true;
        }
};