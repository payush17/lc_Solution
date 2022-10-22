class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int> mt,ms;
        for(char c: t)
            mt[c]++;
        string ans=s;
        int j=0;
        bool kk=true;
        for(int i=0;i<s.size();i++)
        {
            if(!mt.count(s[i]))
                continue;
            int q=0;
            for(auto i: mt)
                if(i.second>0)
                    {q=1;break;}
            if(q)
            {while(j<s.size())
            {
                if(mt.count(s[j]) )
                mt[s[j]]--;
                j++;
                int f=0;
                for(auto i: mt)
                    if(i.second>0)
                        f=1;
                if(f==0)
                    break;
            }}
            int ff=0;
            for(auto i: mt)
                if(i.second>0)
                    {ff=1;break;}
            if(ff)
                break;
            string a=s.substr(i,j-i);
            mt[s[i]]++;
            if(a.size()<=ans.size())
                {ans=a;kk=false;}
        }
        if(ans==s && kk)
            ans="";
        return ans;
    }
};