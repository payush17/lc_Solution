class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> copy = nums;
        vector<int> ans;
        sort(rbegin(copy),rend(copy));
        unordered_map<int,int>map;
        int i=0;
        while(k-- > 0){
            map[copy[i]]++;
            i++;
        }
       
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i])!=map.end() && map[nums[i]]>0){
                ans.push_back(nums[i]);
                map[nums[i]]--;
            }
        }
        return ans;
    }
};