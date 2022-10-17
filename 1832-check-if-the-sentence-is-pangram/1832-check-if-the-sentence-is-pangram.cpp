class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26)return false;
        //map<char,int> m;
       // sort(sentence.begin(),sentence.end());
       // for(int i=0;i<sentence.size();i++){
        //     m[sentence[i]]++ ;
        //}
        //return m.size()==26;
        char arr[26]={0};
        for(auto x: sentence){
            arr[x-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]==0)
                return false;
        }
        return true;
        
    }
};