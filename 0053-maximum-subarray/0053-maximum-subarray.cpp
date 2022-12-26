class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSubarraySum=nums[0];
        int maxcurr_Sum=nums[0];
        for(int i=1;i<nums.size();i++){
            maxcurr_Sum = max(maxcurr_Sum+nums[i],nums[i]);
            if(maxSubarraySum<maxcurr_Sum)
                maxSubarraySum=maxcurr_Sum;
        }
        return maxSubarraySum;
    }
};