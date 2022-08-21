class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> gen_paren = new ArrayList<>();
        backtrack(gen_paren,"",0,0,n);
        return gen_paren;
    }
    public void backtrack( List<String> gen_paren,String s,int open,int close,int n){
        if(s.length() == n*2){
            gen_paren.add(s);
            return ;
        }
        if(open<n)
            backtrack(gen_paren,s+"(",open+1,close,n);
        if(close<open)
            backtrack(gen_paren,s+")",open,close+1,n);
    }
}