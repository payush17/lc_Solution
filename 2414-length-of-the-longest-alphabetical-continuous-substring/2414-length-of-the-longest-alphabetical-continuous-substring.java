class Solution {
    public int longestContinuousSubstring(String s) {
        int longestSubstring =1;
        int count =1;
        for(int i=1;i<s.length();i++){
            if(s.charAt(i)-s.charAt(i-1)==1)
            {
                count++;
                longestSubstring = Math.max(longestSubstring,count);
                
            }
            else
                count=1;
        }
        return longestSubstring;
    }
}