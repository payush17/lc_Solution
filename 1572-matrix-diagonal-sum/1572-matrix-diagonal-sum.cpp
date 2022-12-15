class Solution
{
    public:
        int diagonalSum(vector<vector < int>> &mat)
        {
            long diagonal_sum = 0;
            int len = mat.size();
            for (int i = 0; i < len; i++)
            {
                for (int j = 0; j < len; j++)
                {
                    if (i == j || i + j + 1 == len)
                        diagonal_sum += mat[i][j];
                }
            }
            return diagonal_sum;
        }
};