class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
       vector<int> v;vector<int> ans;
        for(int i=0;i<size(s);i++){
          if(s[i]==c)
              v.push_back(i);
            
        }
       
      for(int i=0;i<size(s);i++){
        int min_dis = 100000;
          for(int j=0;j<v.size();j++){
              min_dis= min(min_dis,abs(i-v[j]));
          }
          ans.push_back(min_dis);
      }
        
        return ans;
    }
};