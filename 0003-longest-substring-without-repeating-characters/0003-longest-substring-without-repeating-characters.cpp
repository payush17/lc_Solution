class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {

            vector<int> a(128, -1);
            int maxLen = 0, l = 0, r = 0;
            while (r < size(s))
            {
                if (a[s[r]] == -1 || a[s[r]]<l  )	 
                    maxLen = max(maxLen, r - l + 1);
                else{
                    l = a[s[r]] + 1;
                }                       
                a[s[r++]] = r;	
            }
            return maxLen;
        }
};