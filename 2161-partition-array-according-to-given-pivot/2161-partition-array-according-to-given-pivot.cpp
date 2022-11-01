class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> v;int pivot_cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot)
                v.push_back(nums[i]);
            if(nums[i]==pivot)
                pivot_cnt++;
        }
        while(pivot_cnt--){
            v.push_back(pivot);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot)
                v.push_back(nums[i]);
        }
        
        return v;
    }
};