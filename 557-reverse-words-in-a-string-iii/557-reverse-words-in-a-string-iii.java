class Solution {
    public String reverseWords(String s) {
        int len = s.length();
        char c [] = s.toCharArray();
        int j=0;
        for(int i=0;i<=len;i++){
             
            if(i==len || c[i]==' '){
                reverse(c,j,i-1);
                j=i+1;
            }
            
                
        }
        return String.valueOf(c);
    }
    private void reverse(char[] c,int lo,int hi){
        while(lo<=hi){
            char temp = c[lo];
            c[lo]=c[hi];
            c[hi]=temp;
            lo++;hi--;
        }
    }
}