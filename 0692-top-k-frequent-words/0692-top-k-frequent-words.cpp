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
            for(auto [key,val]:map){
                if(val>max){
                    max=val;
                    s=key;
                }
                else if(val==max){
                    if(s>key)
                        s=key;
                }
                    
            }
            ans.push_back(s);
            map[s]=-1;
        }
      return ans;
    }
};