
 public class Solution {
    public int maxSubArray(int[] nums) {
        for(int i=1;i<nums.length;i++){
            nums[i]=Math.max(nums[i],nums[i]+nums[i-1]);
            nums[0]=Math.max(nums[0],nums[i]);
        }
    return nums[0];
    }
}
