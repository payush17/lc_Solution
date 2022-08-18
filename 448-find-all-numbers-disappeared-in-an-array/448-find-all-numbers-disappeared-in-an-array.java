class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        int index=0;
        for(int i=0;i<nums.length;i++){
           index = Math.abs(nums[i]);
           if(nums[index-1]>0)
               nums[index-1] = nums[index-1]* -1;
        }
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]>0)ans.add(i+1);
        }
        return ans;
    }
}