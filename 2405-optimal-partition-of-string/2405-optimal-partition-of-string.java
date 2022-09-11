class Solution {
public:
    int partitionString(string s) {
        int sub_String=1;
        set<char> set;
        for(int i=0;i<s.length();i++){
            if(set.find(s[i])==set.end()){
                set.insert(s[i]);
            }
               else{
                   sub_String++;
                   set.clear();
                   set.insert(s[i]);
               }
        }
        return sub_String;
    }
};
