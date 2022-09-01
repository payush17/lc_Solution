class Solution {
    public int minPairSum(int[] nums) {
      Arrays.sort(nums);int max =0;
        int [] arr = new int [nums.length/2];
        int low=0 ,high =nums.length-1;
        while(low<high){
            arr[low] = nums[low]+nums[high];
            low++;high--;
        }
        for(int x:arr){
            max = Math.max(max,x);
        }
        
        return max;
    }
}