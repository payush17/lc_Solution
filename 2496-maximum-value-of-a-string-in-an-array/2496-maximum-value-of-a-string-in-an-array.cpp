class Solution {
public:
    int checkstring(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]>64 && s[i]<123)
                return -1;
        }
        return stoi(s);
    }
    int maximumValue(vector<string>& strs) {
        int max=0; int temp =0;
        for(int i=0;i<strs.size();i++){
            int checkfor_num = checkstring(strs[i]);
            
            if(checkfor_num == -1)
             temp = strs[i].length();
            
            if(max < temp)
                max = temp;
            
            if(max < checkfor_num)
                max = checkfor_num;
            
        }
        return max;
    }
};