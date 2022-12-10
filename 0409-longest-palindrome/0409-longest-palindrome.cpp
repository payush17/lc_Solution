class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> map;
        for(auto x :s){
            map[x]++;
        }
        int longest_palin=0;
        bool one = 0;
        for(auto x :map){
            if(x.second % 2 !=0)
                one=1;
            longest_palin += x.second/2;
            
        }
        longest_palin *= 2;
        return one == 0 ? longest_palin : longest_palin + 1;
    }
};