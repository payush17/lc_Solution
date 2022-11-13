class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
       // int count=0;
        string ans="";
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(j<spaces.size() and i==spaces[j] )
            {
                ans +=' ';
                j++;
                //cout<<j;
            }
            ans+=s[i];
        }
        return ans;
    }
};