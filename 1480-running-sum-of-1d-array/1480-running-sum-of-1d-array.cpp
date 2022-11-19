class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> run_sum;
        run_sum.push_back(nums[0]);
        for(int i=1;i<size(nums);i++){
              nums[i] += run_sum[i-1];
              run_sum.push_back(nums[i]);
        }
        return run_sum;
    }
};