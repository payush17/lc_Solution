class Solution
{
    public:
        vector<vector < int>> generate(int numRows)
        {
            vector<vector < int>> generate;
            for (int i = 0; i < numRows; i++)
            {
                vector<int> ans(i + 1, 1);
                for (int j = 1; j < i; j++)
                {
                    ans[j] = generate[i - 1][j] + generate[i - 1][j - 1];
                }
                generate.push_back(ans);
            }
            return generate;
        }
};