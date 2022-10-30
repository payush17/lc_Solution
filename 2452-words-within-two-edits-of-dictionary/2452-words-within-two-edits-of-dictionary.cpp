class Solution {
public:
    int maxEdits(string &s1,string &s2){
        int ed =0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])ed++ ;
        }
        return ed;
        
    }
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> same;
        for(int i=0;i<queries.size();i++){
            string s1 = queries[i];
            for(int j=0;j<dictionary.size();j++){
                string s2 = dictionary[j];
                int edits = maxEdits(s1,s2);
                if(edits<3){
                    same.push_back(s1);
                    break;
                }
            }
        }
        return same;
    }
};