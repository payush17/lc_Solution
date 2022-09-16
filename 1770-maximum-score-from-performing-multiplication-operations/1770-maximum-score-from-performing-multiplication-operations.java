class Solution {
    public int maximumScore(int[] nums, int[] multipliers) {
       int m = multipliers.length;
    return helperMemo(nums, multipliers, 0, nums.length - 1, 0, new Integer[m][m]);
}

private int helperMemo(int[] n, int[] mul, int stNum, int enNum, int mSel, Integer[][] dp){
    if(mSel == mul.length){
        return 0;
    }
    
    if(dp[stNum][mSel] != null){
        return dp[stNum][mSel];
    }
    
    int first = helperMemo(n, mul, stNum + 1, enNum, mSel + 1, dp) + n[stNum] * mul[mSel];
    int last = helperMemo(n, mul, stNum, enNum - 1, mSel + 1, dp) + n[enNum] * mul[mSel];
    
    dp[stNum][mSel] = Math.max(first, last);
    return dp[stNum][mSel];
	}
}