class Solution
{
    public:
        int findJudge(int n, vector<vector < int>> &trust)
        {

            vector<int> trusting(n + 1, 0);
            vector<int> trusted(n + 1, 0);
            for (auto t: trust)
            {
                trusting[t[0]]++;
                trusted[t[1]]++;
            }
            for (int i = 1; i < n + 1; i++)
            {
                if (trusting[i] == 0 && trusted[i] == n - 1)
                    return i;
            }
            return -1;
        }
};