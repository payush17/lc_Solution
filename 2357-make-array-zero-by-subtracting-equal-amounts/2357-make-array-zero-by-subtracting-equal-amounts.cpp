class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       unordered_map<int,int> map;
        for(auto x:nums){
            map[x]++;
        }
        int min_op=0;
        for(auto x:map){
            if(x.first!=0)
                min_op++;
        }
       return min_op; 
    }
};