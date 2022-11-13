//#include<bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        stack<string> ans;
        char ch=' ';
        //trim(s);
        for(int i=0;i<s.length();i++)
        {
            if(isspace(s[i])) continue;
            string word="";
            while(s[i] != ch && i<s.length())
            { 
               word +=s[i];   
               i++;
            }
            ans.push(word);
            
            
        }
        string rev;
        while(!ans.empty())
        {
            rev+=ans.top();
            rev+=" ";
            ans.pop();
        }
      rev.resize(rev.size()-1);
      return rev;   
    }
};