class Solution {
    public int triangleNumber(int[] nums) {
       int n=nums.length;
        int triplet_count=0;
        Arrays.sort(nums);
        for(int i=0;i<n;i++){
            if(nums[i]==0 )continue;
            for(int j=i+1;j<n;j++){
               // if(nums[j]==0 )continue;
                for(int k=j+1;k<n;k++){
                     //if(nums[k]==0 )continue;
                    if(nums[i]+nums[j]>nums[k])
                        triplet_count++;
                }
            }
        }
        return triplet_count;
    }
}