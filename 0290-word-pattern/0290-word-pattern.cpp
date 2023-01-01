class Solution
{
    public:
        bool wordPattern(string pattern, string s)
        {
            unordered_set<string> set;
            int kk = 0;
            string str = "";
            int len = s.size() - 1;
            for (int i = 0; i <= s.size(); i++)
            {
                if ((i == s.size()) || s[i] == ' ')
                {
                    kk++;
                    set.insert(str);
                    str = "";
                }
                else
                    str += s[i];
            }
            if (kk != pattern.size()) return false;
            
            unordered_map<char, string> map;
            int j = 0;
            for (int i = 0; i < pattern.size(); i++)
            {
                string st = "";
                while (j < s.size() && s[j] != ' ')
                {
                    st += s[j];
                    j++;
                }
                j++;
                if (!map.count(pattern[i]) || map[pattern[i]] == st)
                {
                    map[pattern[i]] = st;
                }
                else
                {
                    return false;
                }
            }
            return map.size() == set.size();
        }
};