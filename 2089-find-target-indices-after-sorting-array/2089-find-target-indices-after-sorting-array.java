class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        List<Integer> indices = new ArrayList<>();
       int index_count=0,appear_count=0; 
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target)appear_count++;
            if(nums[i]<target)index_count++;
            
        }
         int y = index_count;
        for(int i=0;i<appear_count;i++){
           
            indices.add(y++);
        }
        return indices;
    }
}