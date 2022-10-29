class Solution
{
    public:
        vector<int> findAnagrams(string s, string p)
        {
            vector<int> allanag;
            if (size(p) > size(s)) return allanag;

           int sLen = size(s);
           int pLen = size(p);
            vector<int> freq_p(26,0);
            vector<int>freq_subs(26,0);
           //comapring 0th index if it is an anagram 
            for(int i=0;i<pLen;i++){
                freq_p[p[i]-'a']++;
                freq_subs[s[i]-'a']++;
            }
            if(freq_p == freq_subs)allanag.push_back(0);
            
            for(int i=pLen;i<sLen;i++){
                
                freq_subs[s[i]-'a']++;
                freq_subs[s[i-pLen]-'a']--;
                if(freq_p == freq_subs)
                    allanag.push_back(i-pLen+1);//0 based ind
            }
            
            return allanag;
        }
};