class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> freq(101);
        for(auto it:nums)
            freq[it]++;
        int unqiueEle_Sum=0;
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]==1)
               unqiueEle_Sum += nums[i];
        }
        return unqiueEle_Sum;
    }
};