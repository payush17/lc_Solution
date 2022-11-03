class Solution
{
    public:
        void dfs(int pos, vector<int> &num, vector<vector< int>> &result)
        {
            if (pos == num.size())
            {
                result.push_back(num);
                for(auto x : num){
                cout<<x;
                }
                cout<<endl;
            }
            else
            {
                for (int i = pos; i < num.size(); i++)
                {
                    swap(num[i], num[pos]);
                    dfs(pos + 1, num, result);
                    swap(num[i], num[pos]);
                }
            }
        }
    vector<vector < int>> permute(vector<int> &nums)
    {
        vector<vector < int>> ans;
        dfs(0, nums, ans);
        return ans;
    }
};