class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;int j=0;
        while(i<size(s) && j<size(t)){
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
                i++;
        }
        return size(t)-j;
    }
};