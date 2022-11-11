class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i=0;i<size(nums)-1;i++){
            if(nums[i]!=nums[i+1])
            {
               nums[j++]=nums[i+1];
            }
        }
        return j;
    }
};
 