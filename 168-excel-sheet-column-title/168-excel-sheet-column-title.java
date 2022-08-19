class Solution {
    public String convertToTitle(int n) {
      StringBuilder s = new StringBuilder();
        while(n > 0){
            --n;
            s.append((char)(n%26 + 'A'));
            n=n/26;
        }
        s.reverse();
        return s.toString();
    }
}
   