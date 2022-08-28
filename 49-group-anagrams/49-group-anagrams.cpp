class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         int n = strs.size();
        unordered_map<string, vector<string>> map;
        vector<vector<string>>ans;
        
        int i=0;
        while(i<n){
            string str = strs[i];
            sort(str.begin(), str.end());
            map[str].push_back(strs[i]);
            i++;
        }
        for(auto i=map.begin(); i!= map.end(); i++){
            ans.push_back(i->second);
        }
        return ans;
    }
};