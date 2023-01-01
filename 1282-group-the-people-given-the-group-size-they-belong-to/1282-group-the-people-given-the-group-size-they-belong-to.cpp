class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
         vector<vector<int>> groupThePeople;
        unordered_map<int,vector<int>> map;
        for(int i=0;i<groupSizes.size();i++){
            map[groupSizes[i]].push_back(i);
            //reached size index
            if(map[groupSizes[i]].size()==groupSizes[i]){
                groupThePeople.push_back(map[groupSizes[i]]);
                map[groupSizes[i]]={};//resize vector 
            }
        }
        return groupThePeople;
    }
};