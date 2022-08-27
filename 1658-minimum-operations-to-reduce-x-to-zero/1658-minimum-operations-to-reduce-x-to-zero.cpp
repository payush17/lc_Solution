class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
         int n = nums.size(); int sum=0,j=0;
        int target =0;int res =-1;
       
        
        for(int a:nums)target += a;
        target -= x;
        if(target<0)return -1;
        
        for(int i =0;i<n;i++){
            sum += nums[i];
            
            while(sum>target){
                sum -= nums[j];
                j++;
            }
            if(sum == target){
                res = max(res, i-j+1);
            }
        }
        return res == -1 ? -1 : n - res;
    }
};