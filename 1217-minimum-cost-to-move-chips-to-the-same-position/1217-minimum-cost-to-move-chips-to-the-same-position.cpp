class Solution {
public:
    int minCostToMoveChips(vector<int>& v) {
        int even =0;int odd=0;
        for(auto x : v){
            if(x%2==0)
                even++;
            else
                odd++;
        }
        
        return even > odd ? odd : even;
    }
};