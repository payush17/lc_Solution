class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string ,int> map ;vector<string> ans;
        for(int i=0;i<words.size();i++){
            map[words[i]]++ ;
            
        }
        while(k--){
            int max =0;
            string s;
            for(auto x:map){
                if(x.second>max){
                    max=x.second;
                    s=x.first;
                }
                else if(x.second==max){
                    if(s>x.first)// for lexicographical
                        s=x.first;
                }
                    
            }
            ans.push_back(s);
            map[s]=-1;
        }
      return ans;
    }
};