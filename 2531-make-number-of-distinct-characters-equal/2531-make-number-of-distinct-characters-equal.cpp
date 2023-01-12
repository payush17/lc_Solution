class Solution {
public:
    bool isItPossible(string word1, string word2) {
      unordered_map<char,int>m1,m2;
      for(auto x:word1)m1[x]++;
      for(auto x:word2)m2[x]++;
        
      for(int i=0;i<26;i++){
          for(int j=0;j<26;j++){
              char c1 = i+'a';
              char c2 = j+'a';
              if(m1[c1]>0 && m2[c2]>0){
                  m1[c1]--;m2[c1]++;
                  m1[c2]++;m2[c2]--;
                  
                  int charCnt1=0, charCnt2=0;
                  for(int ii=0;ii<26;ii++){
                      charCnt1 += m1[ii+'a']>0;
                      charCnt2 += m2[ii+'a']>0;
                  }
                  if(charCnt1==charCnt2)
                      return true;
                  m1[c1]++;m2[c1]--;
                  m1[c2]--;m2[c2]++;
                  
              } 
              
          }
      }  
        
     return false;   
    }
};