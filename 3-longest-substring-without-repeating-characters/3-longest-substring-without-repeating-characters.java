class Solution {
    public int lengthOfLongestSubstring(String s) {
   int n = s.length();
        int max=0;
        for(int i=0;i<n;i++){
            int [] visit = new int[256];
            for(int j=i;j<n;j++){
                if(visit[s.charAt(j)]==2)
                    break;
                else
                {
                    visit[s.charAt(j)]=2;
                      max= Math.max(max,j-i+1);
                          }
            
            }
                          
          visit[s.charAt(i)]=0;
            
        }
        
    return max;
}
}