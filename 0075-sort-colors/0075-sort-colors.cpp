class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCnt=0,oneCnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)zeroCnt++;
            if(nums[i]==1)oneCnt++;
        }
        //cout<<zeroCnt<<" "<<oneCnt;
        int i=0;
        while(i<nums.size()){
            while(zeroCnt-- > 0){
                nums[i]=0;
                i++;
            }
            while(oneCnt-- >0 ){
                nums[i]=1;
                i++;
            }
            if(i<nums.size())
            nums[i]=2;
            i++;
            
        }
     
    }
};