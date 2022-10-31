class Solution
{
    public:
        bool isToeplitzMatrix(vector<vector < int>> &matrix)
        {
            int rows = matrix.size();
            int colmn = matrix[0].size();
            for (int i = 1; i < rows; i++)
            {
                for (int j = 1; j < colmn; j++)
                {
                    if (matrix[i][j] != matrix[i - 1][j - 1])
                        return false;
                }
            }
            return true;
        }
};