class Solution {
    public int lengthOfLongestSubstring(String s) {
   
        int max=0;int lefts=0 ;int rights=0;
        Set<Character> set = new HashSet<>();
       // int count =0;
        
      while(rights < s.length())
      {
            char c = s.charAt(rights);
          
            if(!set.contains(c)){
                set.add(c);
                rights++;
                max = Math.max(set.size(),max);
        }
          
        else{
            set.remove(s.charAt(lefts));
            lefts++;
                       }
            
        
       
    }
    return max;
                       }
                       }
