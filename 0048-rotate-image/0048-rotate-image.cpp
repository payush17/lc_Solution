class Solution
{
    public:
        void swap(vector<vector < int>> &matrix, int i, int j, int n)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - 1 - j];
            matrix[i][n - 1 - j] = temp;
        }
   
    void transpose(vector<vector < int>> &matrix, int i, int j)
    {
        int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
    }

    void rotate(vector<vector < int>> &matrix)
    {
        int n = matrix.size();
       	
        for (int row = 0; row < n; row++)
        {
            for (int col = row; col < n; col++)
            {
                transpose(matrix, row, col);
            }
        }
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n / 2; col++)
            {
                swap(matrix, row, col, n);
            }
        }
    }
};