class Solution {
public:
    bool isvowel(char ch){
         char c = tolower(ch);
        cout<<c<<endl;
        if(c=='a' || c=='e' || c=='i' ||  c=='o' ||  c=='u')
            return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.length()/2;
        int vc1=0;int vc2=0;
        for(int i=0;i<n;i++){
            if(isvowel(s[i]))vc1++;
            cout<<vc1;
            if(isvowel(s[i+n]))vc2++;
            cout<<vc2;
        }
        return vc1==vc2;
    }
};