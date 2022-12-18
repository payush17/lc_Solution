class Solution
{
    public:
        int countConsistentStrings(string allowed, vector<string> &words)
        {
            set<char> s1;
            int consistentString = 0;
            for (auto x: allowed)
                s1.insert(x);
             for(int i = 0 ; i < words.size() ; i++){
            string str = words[i] ;
            bool flag = true ;
            for(int j = 0 ; j < str.size() ; j++){
                if(s1.find(str[j])==s1.end()) {
                    flag = false ;
                }
            }
            if(flag == true ) consistentString ++ ;
        }
            return consistentString;
        }
};