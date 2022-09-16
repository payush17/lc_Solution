class Solution {
    public int mostWordsFound(String[] sentences) {
        int max= 0;
       for(String s : sentences){
           int spaces=0;
          for(int i=0;i<s.length();i++){
              if(s.charAt(i)==' ')
                  spaces++;
          }
           
           max = Math.max(max,spaces);
       } 
        return max+1;
    }
}