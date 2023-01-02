class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posNeg(nums.size(),0);
        int posInd=0;
        int negInd=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                posNeg[posInd]=nums[i];
                posInd+=2;
            }
            if(nums[i]<0){
                posNeg[negInd]=nums[i];
                negInd+=2;
            }
        }
        return posNeg;
    }
};