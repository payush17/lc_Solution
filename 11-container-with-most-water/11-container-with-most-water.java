class Solution {
    public int maxArea(int[] nums) {
        int min = -1;int area=0;int maxArea=-1;
        int low=0;int high= nums.length-1;
          while(low<high){
              min = Math.min(nums[low],nums[high]);
              area = min*(high-low);
              maxArea = Math.max(maxArea,area);
              if(nums[low]<nums[high]){
                   low= low+1;
                }
              
                  else
                      high=high-1;
                  
              
              
              
              
              
              
              
          }
    return maxArea;
    
    
    
    
    
    
    
    
    
    
    
    }
    
    
}