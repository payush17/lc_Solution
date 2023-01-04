class Solution
{
    public:
        vector<vector < int>> onesMinusZeros(vector<vector < int>> &grid)
        {
            int n = grid.size();
            int m = grid[0].size();
            vector<int> rowd(n, 0), cold(m, 0);
            vector<vector < int>> onesZeros(n, vector<int> (m, 0));

           	//row sum
            for (int i = 0; i < n; i++)
            {
                int rowS = 0;
                for (int j = 0; j < m; j++)
                {
                    rowS += grid[i][j];
                }
                rowd[i] = rowS;
            }
           	//col sum
            for (int i = 0; i < m; i++)
            {
                int colS = 0;
                for (int j = 0; j < n; j++)
                {
                    colS += grid[j][i];
                }
                cold[i] = colS;
            }
           	// diff 
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    onesZeros[i][j] = rowd[i] + cold[j] - (m - rowd[i] + n - cold[j]);
                }
            }
            return onesZeros;
        }
};