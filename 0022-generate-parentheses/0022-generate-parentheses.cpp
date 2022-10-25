class Solution
{
    public:

        vector<string> ans;
     bool valid(string s )
    {int diff = 0;
        for (auto ch: s)
        {
            diff += (ch == '(' ? 1 : -1);
            if (diff < 0) return false;
        }
        return !diff;
    }
     void solve(string s, int N)
    {
        if (size(s) == N)
        {
            if (valid(s)) ans.push_back(s);
            return;
        }
        solve(s + '(', N);
        solve(s + ')', N);
        
    }
    vector<string> generateParenthesis(int n)
    {
        solve("", 2 *n);
        return ans;
        
    }
   
   
};