class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        //prefix sum;
        int n = nums.size();int min_val=nums[0];int max1;
        vector<long> prefix(n,nums[0]);
        for(int i=1;i<n;++i){
            prefix[i]=prefix[i-1]+nums[i];
            max1 = ceil(prefix[i]/double(i+1));
            min_val = max(min_val,max1);
        }
        return min_val;
    }
};