class Solution
{
    public:

        void exploreIsland(vector<vector < int>> &grid, int i, int j, int &islandPerimeter)
        {
            if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0)
            {
                islandPerimeter += 1;
                return;
            }
            if (grid[i][j] == -1)
                return;
            if (grid[i][j] == 1)
                grid[i][j] = -1;

            exploreIsland(grid, i + 1, j, islandPerimeter);
            exploreIsland(grid, i, j - 1, islandPerimeter);
            exploreIsland(grid, i - 1, j, islandPerimeter);
            exploreIsland(grid, i, j + 1, islandPerimeter);
        }
    int islandPerimeter(vector<vector < int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int islandPerimeter = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    exploreIsland(grid, i, j, islandPerimeter);
                    break;
                }
            }
        }
        return islandPerimeter;
    }
};