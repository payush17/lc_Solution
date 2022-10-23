class Solution {
public:

    string reversePrefix(string word, char ch) {
        int fi=-1;
       for(int i=0;i<word.size();i++){
           if(word[i]==ch){
               fi=i;
               break;
           }
       }
        
        if(fi<0)return word;
        int i=0;
        while(i<fi){
            swap(word[i++],word[fi--]);
        }
        return word;
    }
};