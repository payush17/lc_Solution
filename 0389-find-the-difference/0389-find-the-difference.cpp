class Solution {
public:
    char findTheDifference(string s, string t) {
      int s1=0,s2=0;
        for(auto i:s)
            s1 +=i;
        for(auto i:t)
            s2 +=i;
         char diff=s2-s1;
        return diff;
    
    }
};