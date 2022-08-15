class Solution {
    public int subarraySum(int[] nums, int k) {
       int sum =0 ,count =0;
        Map<Integer,Integer> map= new HashMap <>();
        map.put(0,1);//this is for edge case when subarray start with 0 index;
        for(int i=0;i<nums.length;i++){
            sum += nums[i];
        if(map.containsKey(sum-k))
            count = count+ map.get(sum-k);
        
        map.put(sum, map.getOrDefault(sum,0)+1);
        }
        return count;
    }
}
 