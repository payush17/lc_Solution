class Solution
{
    public:
        vector<vector < int>> diagonalSort(vector<vector < int>> &mat)
        {
           	//BF
            int n = mat.size();
            int m = mat[0].size();
            vector<vector < int>> diagonalSort(n, vector<int> (m, 0));

            for (int col = 0; col < m; col++)
            {
                int x = 0;
                int y = col;
                vector<int> dig;
               	//making vector of diagonal of ith col
                while (x < n && y < m)
                {
                    dig.push_back(mat[x][y]);
                    x++;
                    y++;
                }
                sort(begin(dig), end(dig));
                x = 0;
                y = col;
                for (int i = 0; i < dig.size(); i++)
                {
                    diagonalSort[x][y] = dig[i];
                    x++;
                    y++;
                }
            }
           	//-------------------------------------------//
            for (int row = 1; row < n; row++)
            {
                int x = row;
                int y = 0;
                vector<int> dig;
               	//making vector of diagonal of ith row
                while (x < n && y < m)
                {
                    dig.push_back(mat[x][y]);
                    x++;
                    y++;
                }
                sort(begin(dig), end(dig));
                x = row;
                y = 0;
                for (int i = 0; i < dig.size(); i++)
                {
                    diagonalSort[x][y] = dig[i];
                    x++;
                    y++;
                }
            }
            return diagonalSort;
        }
};