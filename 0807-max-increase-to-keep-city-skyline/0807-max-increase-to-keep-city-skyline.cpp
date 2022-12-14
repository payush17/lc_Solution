class Solution
{
    public:
        int maxIncreaseKeepingSkyline(vector<vector < int>> &grid)
        {
            int n = grid.size(), max_totalsum = 0;
            vector<int> max_rowvalue(n);
            vector<int> max_colvalue(n);

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    max_rowvalue[i] = max(max_rowvalue[i], grid[i][j]);
                }
               
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    max_colvalue[j] = max(max_colvalue[j], grid[i][j]);

                }
                
            }

           
            
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                   max_totalsum += min(max_rowvalue[i], max_colvalue[j]) - grid[i][j];
                }
            }

            return max_totalsum;
        }
};