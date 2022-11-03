class Solution {
public:
    int percentageLetter(string s, char letter) {
        int l_cnt =0;
        for(auto x : s){
            if(x==letter)
                l_cnt++;
        }
        l_cnt *= 100;
        return l_cnt/size(s);
    }
};