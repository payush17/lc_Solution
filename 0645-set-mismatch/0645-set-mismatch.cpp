class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> map;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        map[nums[i]]++;
    }
    for(auto it : map){
      if(it.second == 2)
         ans.push_back( it.first);
    }
    for(int i=1;i<nums.size()+1;i++){
      if(map.find(i) == map.end())
          ans.push_back(i);
    }   
    return ans;
    }
    
};