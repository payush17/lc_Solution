class Solution {
    public int lengthOfLongestSubstring(String s) {
     int [] charcount = new int [256];int long_Substring=0;
        
        int j=0;
        for(int i=0;i<s.length();i++){
            char c = s.charAt(i);
            charcount[c]++;
            while(charcount[c]>1){
                charcount[s.charAt(j)]--;
                j++;
            }
             long_Substring = Math.max(long_Substring,i-j+1);
        }
       
      return long_Substring;
    }
 }