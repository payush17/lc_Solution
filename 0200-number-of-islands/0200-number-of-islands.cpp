class Solution
{
    public:
        void exploreIsland(vector<vector < char>> &grid, int i, int j)
        {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
                return;
            grid[i][j] = '0';
            exploreIsland(grid, i + 1, j);
            exploreIsland(grid, i, j - 1);
            exploreIsland(grid, i - 1, j);
            exploreIsland(grid, i, j + 1);
        }

    int numIslands(vector<vector < char>> &grid)
    {
        int islandCount = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1')
                {
                    exploreIsland(grid, i, j);
                    islandCount++;
                }
            }
        }
        return islandCount;
    }
};