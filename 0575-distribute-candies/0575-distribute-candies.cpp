class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> map;
        for(auto x:candyType){
            map[x]++;
        }
        int n = candyType.size()/2;
        if(map.size()>=n)return n;
        return map.size();
    }
};