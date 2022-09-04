class Solution {

    public int smallestDivisor(int[] nums, int threshold) {
        int low = 1;
        int high = nums[0];
        for(int x : nums)
            high = Math.max(high,x);

        int min_divisor = high;
        while (low < high) {
            int k = low + (high - low) / 2;
            int curr_ans = 0;
            for (int x : nums)
                curr_ans += (x+ k-1)/k ; 
// v += (n + mid - 1)/ mid ;
            if (curr_ans <= threshold) {
                min_divisor = Math.min(min_divisor, k);
                high = k;
            } 
            else low = k + 1;
        }

        return min_divisor;
    }
}
