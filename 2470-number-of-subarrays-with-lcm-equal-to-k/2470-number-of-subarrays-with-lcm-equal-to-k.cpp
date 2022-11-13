class Solution {
public:

    int subarrayLCM(vector<int>& nums, int k) {
        int cnt=0; int ans=0;
       
    
        for(int i=0;i<size(nums);i++){
             int l= nums[i];
            for(int j=i;j<size(nums);j++){
                     l = lcm(l,nums[j]);
                     if(l==k)
                       ans++;
                     else if(l>k)
                          break;
                
                }
               
            }
        
        
       
      
        return ans;
    }   
    
};
    
    