class Solution
{
    public:
        int diagonalSum(vector<vector < int>> &mat)
        {
             long diagonal_sum = 0;
             long pri_diagonalSum=0;
             long scn_diagonalSum=0;
             int len = mat.size();
            // for (int i = 0; i < len; i++)
            // {
            //     for (int j = 0; j < len; j++)
            //     {
            //         if (i == j || i + j + 1 == len)
            //             diagonal_sum += mat[i][j];
            //     }
            // }
            // return diagonal_sum
            
            
            for(int i=0;i<len;i++){
                pri_diagonalSum += mat[i][i];
                scn_diagonalSum += mat[i][len-i-1];
            }
            diagonal_sum = pri_diagonalSum + scn_diagonalSum;
            return len&1 == 1 ? diagonal_sum - mat[len/2][len/2] : diagonal_sum;
            
        }
};