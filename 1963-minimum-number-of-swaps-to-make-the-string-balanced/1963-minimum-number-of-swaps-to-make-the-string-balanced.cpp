class Solution {
public:
    int minSwaps(string s) {
        int swap=0;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[')
                swap++;
            if(s[i]==']')
            {
               if(swap>0)
                    swap--;
            }
            
        }
        return (swap+1)/2;
    }
};