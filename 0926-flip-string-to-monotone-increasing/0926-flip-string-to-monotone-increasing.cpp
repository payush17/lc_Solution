class Solution
{
    public:
        int minFlipsMonoIncr(string s)
        {
            int cnt0 = 0;
            int cnt1 = 0;
            int n = s.length();

            for (int i = 0; i < s.length(); i++)
            {
                if(s[i]== '1')cnt1++;
                if(s[i]== '0'){
                    if(cnt1 > 0)
                        cnt0++;
                }
                
                if(cnt0 > cnt1)cnt0 =cnt1;
            }
            

            return cnt0;
        }
};