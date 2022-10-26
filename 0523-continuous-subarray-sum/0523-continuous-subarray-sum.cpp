class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map = {{0,-1}};
        int rem=0;
        for(int i=0;i<nums.size();i++){
            rem += nums[i];
            rem %= k;
            if(map.find(rem)!= map.end()){
                if(i - map[rem]>1)return true;
            }
            else
                map[rem]=i;
        }
        return false;
    }
};