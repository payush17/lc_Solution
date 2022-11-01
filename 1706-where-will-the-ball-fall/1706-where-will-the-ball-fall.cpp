class Solution
{
    public:
        vector<int> findBall(vector<vector < int>> &grid)
        {
            vector<int> ans;
            for (int col = 0; col < grid[0].size(); col++)
                ans.push_back(helper(grid, 0, col));

            return ans;
        }

    int helper(vector<vector < int>> &grid, int row, int col)
    {
        if (row == grid.size())
            return col;

        int d = grid[row][col];
        if (col + d < grid[0].size() && col + d >= 0 && grid[row][col] == grid[row][col + d])
            return helper(grid, row + 1, col + d);

        return -1;
    }
};