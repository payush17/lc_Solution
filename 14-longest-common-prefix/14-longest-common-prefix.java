class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length ==0 || strs == null) return "";
      Arrays.sort(strs);
        String front = strs[0];
        String last = strs[strs.length-1];
        int prefix_count =0;
        while(prefix_count<front.length()){
            if(front.charAt(prefix_count) == last.charAt(prefix_count))
                prefix_count++ ;
            else 
                break;
        }
        return prefix_count == 0 ? "" : front.substring(0, prefix_count);
        
    }
}
