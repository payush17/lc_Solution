class Solution {
public:
    char repeatedCharacter(string s) {
        set<char>set;
        for(auto x: s){
            if(set.find(x)==set.end())
                set.insert(x);
            else
                return x;
        }
        return ' ';
    }
};