class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> run_sum;
        run_sum.push_back(nums[0]);
        for(int i=1;i<size(nums);i++){
             
              run_sum.push_back(nums[i] + run_sum[i-1]);
        }
        return run_sum;
    }
};