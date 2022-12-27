class Solution
{
    public:
        void setZeroes(vector<vector < int>> &matrix)
        {
            int m = matrix.size();
            int n = matrix[0].size();
            set<int> set1;
            set<int> set2;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        set1.insert(i);
                        set2.insert(j);
                    }
                }
            }

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (set1.count(i) || set2.count(j))
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
};