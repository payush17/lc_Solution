class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(size(s1)>size(s2))return false;
        sort(s1.begin(),s1.end());
        
        for(int i=0;i<=size(s2)-size(s1);i++){
            string sub = s2.substr(i,size(s1));
            sort(sub.begin(),sub.end());
            if(sub==s1){
                return true;
            }
            
        }
        return false;
    }
};