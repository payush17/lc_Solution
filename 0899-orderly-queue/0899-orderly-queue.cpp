class Solution
{
    public:
        string orderlyQueue(string s, int k)
        {
            string ans = s;
            int s_len = size(s);
            if (k == 1)
            {
                s += s;
                for (int i = 0; i < size(s) - s_len; i++)
                {
                    string str = s.substr(i, s_len);
                    if (str < ans)
                        ans = str;
                }
                return ans;
            }
            sort(s.begin(), s.end());
            return s;
        }
};