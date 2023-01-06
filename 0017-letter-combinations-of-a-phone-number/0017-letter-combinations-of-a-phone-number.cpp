class Solution
{
    public:
        void dfs(vector<string> &combn, vector<string> &letter, string &digit, string str, int i)
        {
            if (i >= digit.size())
            {
                combn.push_back(str);
                return;
            }
            int n = digit[i] - '0';
            string word = letter[n];
            for (int k = 0; k < word.size(); k++)
            {
                str.push_back(word[k]);
                dfs(combn, letter, digit, str, i + 1);
                str.pop_back();
            }
        }

    vector<string> letterCombinations(string digit)
    {
         vector<string> combn;
        if(digit.size()==0)return combn;
        vector<string> letter(10);
        letter = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
        string str = "";
        dfs(combn, letter, digit, str, 0);
        return combn;
    }
};