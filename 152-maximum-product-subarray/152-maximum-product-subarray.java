class Solution {
    public int maxProduct(int[] nums) {
        int max_product = Integer.MIN_VALUE;  int curr_product=1;
        for(int i=0;i<nums.length;i++){
           curr_product *= nums[i];
            max_product = Math.max(curr_product,max_product);
            //if curr_product turn 0 make it 1
            if(curr_product==0)curr_product =1;
            
        }
        curr_product=1;
        //traverse backward 
        for(int i=nums.length-1;i>=0;i--){
            curr_product *= nums[i];
            //max_product till forward traverse
            max_product = Math.max(max_product,curr_product);
            if(curr_product==0)curr_product=1;
        }
        return max_product;
    }
}
// Overall TC = O(2n) =~ O(n);