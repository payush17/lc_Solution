class Solution {
public:
     vector<string> v;
    vector<string> generateParenthesis(int n) {
        string s;
        generate(s,n,n);
        return v;
    }
    void generate(string &s,int op,int cl){
       if(op ==0 && cl==0){
           v.push_back(s);
           return ;
       }
        if(op>0){
            s.push_back('(');
            generate(s,op-1,cl);
            s.pop_back();
        }
        if(cl>0){
            if(op<cl){
                s.push_back(')');
                generate(s,op,cl-1);
                s.pop_back();
            }
        }
    }
};