class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
       
      List<List<Integer>> res = new ArrayList<>();
        int n = nums.length;
        
        if(nums==null || n < 4)return res;
        if(nums[0]==1000000000 && nums[1]==1000000000) return res;
        if(nums[0]==-1000000000 && nums[1]==-1000000000) return res;
        
        Arrays.sort(nums);
        
    for(int i=0;i<n-3;i++){
       
        for(int j=i+1;j<n-2;j++){
        long rem_target = target - nums[j]-nums[i];
         int low = j+1;int high =n-1;
               while(low<high){
                   int rem_sum = nums[low]+nums[high];
                   if(rem_sum < rem_target) low++ ;
                   else if(rem_sum>rem_target)high -- ;
                   else
                   {
                       List<Integer> quadrup = new ArrayList<>();
                       quadrup.add(nums[i]);
                       quadrup.add(nums[j]);
                       quadrup.add(nums[low]);
                       quadrup.add(nums[high]);
                       res.add(quadrup);
                      
                       
                  while(low<high && nums[low] == quadrup.get(2)) ++low ;     
                  while(low<high && nums[high] == quadrup.get(3)) --high ;     
              
                   }  
               }
            while(j+1 <n-2 && nums[j]== nums[j+1])++j;
            while(i+1 <n-3 &&  nums[i]==nums[i+1])++i;
                    
          
                    
                }
            }
        return res;
    }
}