class Solution {
    public int minPairSum(int[] nums) {
      Arrays.sort(nums);int max =0;int pair_sum;
       // int [] arr = new int [nums.length/2];
        int low=0 ,high =nums.length-1;
        while(low<high){
           pair_sum = nums[low]+nums[high];
            max = Math.max(pair_sum,max);
            low++;high--;
        }
        
        
        return max;
    }
}