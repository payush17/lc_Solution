class Solution {
    public int maxScore(int[] cardPoints, int K) {
        int total = 0;
        for (int i = 0; i < K; i++) total += cardPoints[i];
        int max  = total;
        for (int i = K - 1, j = cardPoints.length - 1; i >= 0; i--, j--) {
            total += cardPoints[j] - cardPoints[i];
          max = Math.max(max, total);
        }
        return max;
    }
}