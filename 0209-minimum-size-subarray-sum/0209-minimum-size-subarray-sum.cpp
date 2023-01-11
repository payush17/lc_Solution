class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;int sum=0; int minSizeSubarray=INT_MAX;
        for(int right=0;right<nums.size();right++){
            sum += nums[right];
            while(sum >= target && left <= right){
                sum -= nums[left];
                minSizeSubarray= min(minSizeSubarray,right-left+1);
                left++;
            }
        }
       return minSizeSubarray == INT_MAX ? 0 : minSizeSubarray;
    }
};