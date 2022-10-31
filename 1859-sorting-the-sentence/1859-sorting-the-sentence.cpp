class Solution
{
    public:
        string sortSentence(string s)
        {
           	//vector<string> s;
            string ans = "";

            map<int, string> map;
            for (int i = 0; i < s.size(); i++)
            {
                string s1 = "";
                if (s[i] == ' ') continue;

                while (!isdigit(s[i]))
                {
                    s1 += s[i];
                    i++;
                }
                map[s[i]] = s1;
            }
            int i = 1;
            for (auto x: map)
            {
                if (i != map.size())
                {
                    ans += x.second;
                    ans += ' ';
                }
                else
                    ans += x.second;
                i++;
            }

            return ans;
        }
};