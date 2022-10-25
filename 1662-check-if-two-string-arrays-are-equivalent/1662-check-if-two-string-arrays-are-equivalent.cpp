class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
      //  sort(w1.begin(),w1.end());
        string s1,s2;
      //  sort(w2.begin(),w2.end());
        for(auto x:w1){
            s1 += x;
        }
        for(auto x:w2){
            s2 += x;
        }
        return s1==s2;
    }
};