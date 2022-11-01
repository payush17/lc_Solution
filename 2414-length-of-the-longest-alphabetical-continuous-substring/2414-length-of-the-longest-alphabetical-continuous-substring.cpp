class Solution {
public:
    int longestContinuousSubstring(string s) {
       int longestSubstring =1;
        int count =1;
        for(int i=1;i<s.length();i++){
            if(s[i]-s[i-1]==1)
            {
                count++;
                longestSubstring = max(longestSubstring,count);
                
            }
            else
                count=1;
        }
        return longestSubstring;
    }
};