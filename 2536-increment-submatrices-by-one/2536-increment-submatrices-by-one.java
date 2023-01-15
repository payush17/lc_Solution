class Solution {
    public int[][] rangeAddQueries(int n, int[][] queries) {
        int m = queries.length;
//vector<vector<int>> v (n,vector<int>(n));
        int [][]v = new int [n][n];
        for(int i=0;i<m;i++){
            for(int j=queries[i][0];j<=queries[i][2];j++){
                for(int k=queries[i][1];k<=queries[i][3];k++){
                    v[j][k]++;
                }
            }
        }
        return v;
    }
}