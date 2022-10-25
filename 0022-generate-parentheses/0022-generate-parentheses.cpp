class Solution {
public:
    void dfs(int n,int op,int cl,vector<string>& paren,string res){
        if(size(res)== 2*n)paren.push_back(move(res));
        if(op<n)dfs(n,op+1,cl,paren,res + '(');
        if(cl<op)dfs(n,op,cl+1,paren,res + ')');
    }
    vector<string> generateParenthesis(int n) {
        vector<string> paren;
        dfs(n,0,0,paren,"");
        return paren;
    }
};