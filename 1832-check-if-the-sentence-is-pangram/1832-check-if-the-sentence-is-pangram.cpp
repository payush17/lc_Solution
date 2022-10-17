class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26)return false;
        map<char,int> m;
       // sort(sentence.begin(),sentence.end());
        for(int i=0;i<sentence.size();i++){
             m[sentence[i]]++ ;
        }
        return m.size()==26;
        
    }
};