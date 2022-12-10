class Solution {
public:
    int longestPalindrome(string s) {
        //unordered_map<char,int> map;
         vector<int> v(58);
        for(auto x :s){
            x = x - 'A';
            v[x]++;
        }
        int longest_palin=0;
        bool one = 0;
        for(auto x :v){
            if(x % 2 !=0)
                one=1;
            longest_palin += x/2;
            
        }
        longest_palin *= 2;
        return one == 0 ? longest_palin : longest_palin + 1;
    }
};