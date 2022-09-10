class Solution {
    public int maxProfit(int k, int[] prices) {
        int [] buy = new int [k+1];
        int [] sell = new int [k+1];
        Arrays.fill(buy,1001);
        for(int x: prices){
            for(int i=1;i<=k;i++){
                buy[i]= Math.min(buy[i],x-sell[i-1]);
                sell[i]= Math.max(sell[i],x-buy[i]);
            }
        }
        return sell[k];
    }
}
