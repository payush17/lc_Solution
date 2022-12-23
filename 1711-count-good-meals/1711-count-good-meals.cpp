class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
      long long goodMeals=0;
        unordered_map<int,int> map;
        for(auto x:deliciousness){
            for(int i=1;i<=pow(2,21);i*=2){
                if(map.count(i-x)) goodMeals += map[i-x];
            }
            map[x]++;
        }
        return goodMeals % (int)(1e9 +7);
    }
};