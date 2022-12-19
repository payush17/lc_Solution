class Solution
{
    public:
        int findJudge(int n, vector<vector < int>> &trust)
        {

            vector<int> trustful(n + 1, 0);

            for (auto t: trust)
            {
                trustful[t[0]]--;//outderee
                trustful[t[1]]++;//indegree
            }
            for (int i = 1; i < n + 1; i++)
            {
                 if(trustful[i] == n-1)//indegree should be n-1
                     return i;
            }
            return -1;
        }
};