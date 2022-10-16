class Solution {
public:
    int countTime(string s) {
        //hour
        int hr =1;int mn =1;
           if (s[3] == '?')
           mn *= 6;
          if (s[4] == '?')
             mn *= 10;
       
             if(s[0]=='?'){
                 if(s[1]-'0'<4)
                   hr *= 3;
             else
                 hr *= 2;
              }
             if(s[1]=='?'){
               if(s[0]== '2')
                   hr*=4;
               else
                   hr *= 10;
               }
        
          
         
        if (s[0] == '?' && s[1] == '?')
          return mn* 24;
        
        
       return hr*mn;
         }
       
    };
