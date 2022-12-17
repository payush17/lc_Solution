class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<vector<int>> count(nums.size()+1);
        vector<int> kfreq_ele;
        int topele=0;
        for(auto x:nums)
            map[x]++;
        
        for(auto x:map){
            count[x.second].push_back(x.first);
        }
        for(int i=nums.size(); i>0; i--){
            if(count[i].size()!=0){
                for(int j=0; j<count[i].size(); j++){
                    kfreq_ele.push_back(count[i][j]);
                    topele++;
                }
            }
            if(topele==k) break;
        }
       
        
        return kfreq_ele;
    }
};