class Solution {

    public int minEatingSpeed(int[] piles, int h) {
        int low = 1;
        int high = 1000000000;
        // we can also ingore to find max element by using max constriant
      //  for (int x : piles)
       //     high = Math.max(high, x);
        
        int eating_speed = high;
        while (low < high) {
            int k = low + (high - low) / 2;
            int hours = 0;
            for (int x : piles)
                hours += Math.ceil(1.0 * x / k);

            if (hours <= h) {
                eating_speed = Math.min(eating_speed, k);
                high = k;
            } else low = k + 1;
        }

        return eating_speed;
    }
}
