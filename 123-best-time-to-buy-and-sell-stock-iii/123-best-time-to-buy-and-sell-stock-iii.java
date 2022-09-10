class Solution {

    public int maxProfit(int[] prices) {
        int mp1 = Integer.MAX_VALUE;
        int profit1 = 0;
        int mp2 = Integer.MAX_VALUE;
        int profit2 = 0;
        for (int i = 0; i < prices.length; i++) {
            //first time buy
            mp1 = Math.min(mp1, prices[i]);

            profit1 = Math.max(profit1, prices[i] - mp1);
           //second time buy
            mp2 = Math.min(mp2, prices[i] - profit1);//reduce profit money
            
            profit2 = Math.max(profit2, prices[i] - mp2);
        }
        return profit2;
    }
}
