class Solution
{
    public:
        void exploreIsland(vector<vector < int>> &grid, int i, int j, int &maxArea)
        {
            if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0)
                return;
            if (grid[i][j] == 1) maxArea++;
            grid[i][j] = 0;
            exploreIsland(grid, i + 1, j, maxArea);
            exploreIsland(grid, i, j - 1, maxArea);
            exploreIsland(grid, i - 1, j, maxArea);
            exploreIsland(grid, i, j + 1, maxArea);
        }
    int maxAreaOfIsland(vector<vector < int>> &grid)
    {
        int maxislandArea = 0;
        int maxArea = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    exploreIsland(grid, i, j, maxArea);
                    maxislandArea = max(maxislandArea, maxArea);
                    maxArea = 0;
                }
            }
        }
        return maxislandArea;
    }
};