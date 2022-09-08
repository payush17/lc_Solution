class Solution {
    public int triangleNumber(int[] nums) {
        int n = nums.length;
        int triplet_count=0;
        Arrays.sort(nums);
        for(int i=2;i<n;i++){
            int j=0;int k=i-1;
            while(j<k){
                if(nums[k]+nums[j]>nums[i]){
                    triplet_count += k-j;
                    k -= 1;
                }
                else
                    j += 1;
            }
        }
        return triplet_count;
    }
}
