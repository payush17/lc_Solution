class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        for(int i=0;i<size(s);i++)
        {
           if(s[i] != '9')
           {
               s[i]='9';
               break;
           }   
        }
        int n=stoi(s);
        return n;
    }
};