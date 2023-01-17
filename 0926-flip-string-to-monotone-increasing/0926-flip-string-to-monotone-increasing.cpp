class Solution
{
    public:
        int minFlipsMonoIncr(string s)
        {
            int flip = 0;
            int cnt1 = 0;
            int n = s.length();

            for (int i = 0; i < s.length(); i++)
            {
                if(s[i]== '1')cnt1++;
                if(s[i]=='0'){
                    flip++;
                    flip = min(cnt1,flip);
                }
            
            }
            return flip;
        }
};