class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
      //  ans.push_back(0);
        for(int i=0;i<=n;i++){
            int sum =0;
            int nums =i;
            while(nums>0){
               sum += nums%2;
                nums /= 2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};