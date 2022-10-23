class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> map;
    vector<int> ans;
    for(auto x:nums){
        map[x]++;
    }
    for(auto it : map){
      if(it.second == 2)
         ans.push_back( it.first);
    }
    for(int i=1;i<nums.size()+1;i++){
      if(map[i]==0)
          ans.push_back(i);
    }   
    return ans;
    }
    
};