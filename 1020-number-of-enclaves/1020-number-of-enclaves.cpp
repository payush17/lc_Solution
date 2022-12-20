class Solution
{
    public:

        void exploreGrid(vector<vector < int>> &grid, int i, int j)
        {
            if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0)
            {
                return;
            }
            grid[i][j] = 0;

            exploreGrid(grid, i + 1, j);
            exploreGrid(grid, i, j - 1);
            exploreGrid(grid, i - 1, j);
            exploreGrid(grid, i, j + 1);
        }

    int numEnclaves(vector<vector < int>> &grid)
    {
        int EnclavesCount = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            if (grid[i][0] == 1)
            {
                exploreGrid(grid, i, 0);
            }
            if (grid[i][m - 1])
            {
                exploreGrid(grid, i, m - 1);
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (grid[0][i] == 1)
            {
                exploreGrid(grid, 0, i);
            }
            if (grid[n - 1][i])
            {
                exploreGrid(grid, n - 1, i);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)

                {
                    EnclavesCount++;
                }
            }
        }
        return EnclavesCount;
    }
};