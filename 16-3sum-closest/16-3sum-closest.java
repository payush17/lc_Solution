class Solution {

    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int closest_sum = 0;
        int min = 100000;
        for (int i = 0; i < nums.length - 2; i++) {
            int j = i + 1;
            int k = nums.length - 1;
            int sum = 0;
            while (j < k) {
                sum = nums[i] + nums[j] + nums[k];
                if (sum == target) return sum;
                int difference = Math.abs(target - sum);
                if (difference < min) {
                    closest_sum = sum;
                    min = difference;
                }
                if (sum > target) k -= 1;
                else j += 1;
            }
        }

        return closest_sum;
    }
}
