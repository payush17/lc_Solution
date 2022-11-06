class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0,j=0;
        string ans;
        for(int i=0;i<size(s);i++)
        {
            
            if(s[i]==' ')
            {
                count++;
                j=i;
            }
            if(count == k)
                break;
            
        }
        if(count < k)
            return s;
        s=s.substr(0,j);
        return s;
    }
};