class Solution {

    public int tribonacci(int n) {
        // int [] dp = new int [38];
        // dp[0]=0;
        // dp[1]=dp[2]=1;
        if (n < 2) return n;
       
        int f = 0, s = 1, t = 1;
        int tri_num = 0;
        for (int i = 3; i <= n; i++) {
            //dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
            tri_num = f + s + t;
            f = s;
            s = t;
            t = tri_num;
        }
        return t;
    }
}
