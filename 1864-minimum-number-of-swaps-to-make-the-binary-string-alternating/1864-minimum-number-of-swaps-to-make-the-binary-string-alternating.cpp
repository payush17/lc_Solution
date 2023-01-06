class Solution
{
    public:
        int minSwaps(string st)
        {
            int n = st.size();
            int cnt1 = 0, cnt0 = 0;
            string s1 = "";
            string s2 = "";
            for (int i = 0; i < n; i++)
            {
                if (st[i] == '1') cnt1++;
                else cnt0++;
            }
            if (abs(cnt1 - cnt0) > 1) return -1;

            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    s1.push_back('1');
                    s2.push_back('0');
                }
                else
                {
                    s1.push_back('0');
                    s2.push_back('1');
                }
            }

            int count1 = 0;
            int count2 = 0;
            if (cnt1 == cnt0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (s1[i] != st[i])
                        count1++;
                    if (s2[i] != st[i])
                        count2++;
                }
                return min(count1 / 2, count2 / 2);
            }
            if(cnt1>cnt0)s2=s1;
            for (int i = 0; i < n; i++)
            {
                if (st[i] != s2[i]) count1++;
            }
            return count1 / 2;
        }
};