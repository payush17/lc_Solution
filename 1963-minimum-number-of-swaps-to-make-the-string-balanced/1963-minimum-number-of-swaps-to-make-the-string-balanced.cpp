class Solution {
public:
    int minSwaps(string s) {
        int swap=0;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[')
                st.push(s[i]);
            if(s[i]==']')
            {
                if(st.size()>0 && st.top()=='[')
                    st.pop();
            }
            
        }
        return (st.size()+1)/2;
    }
};