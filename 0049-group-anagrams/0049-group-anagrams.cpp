class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         int n = strs.size();
        unordered_map<string, vector<string>> map;
        vector<vector<string>> groupAnagram;
        
        
       for(auto s : strs){
            string str = s;
            sort(str.begin(), str.end());
            map[str].push_back(s);
            
        }
        for(auto x:map){
            groupAnagram.push_back(x.second);
        }
        return groupAnagram;
    }
};