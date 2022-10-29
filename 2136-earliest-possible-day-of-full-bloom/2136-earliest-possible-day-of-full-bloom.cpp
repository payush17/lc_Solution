class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
     vector<pair<int,int>> pair;
        for(int i =0;i<plantTime.size();i++){
            pair.push_back({growTime[i],plantTime[i]});
        }
        sort(pair.rbegin(),pair.rend());
        int plant_time =0;
        int bloom_time =0;
        for(int i=0;i<plantTime.size();i++){
            plant_time += pair[i].second;
            bloom_time = max(bloom_time,plant_time+pair[i].first);
        }
        return bloom_time; 
    }
};