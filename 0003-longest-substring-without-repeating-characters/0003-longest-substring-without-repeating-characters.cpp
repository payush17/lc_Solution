class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<2)return s.size();
        int left =0;
        int right = 0;
        int maxLen =0;
        unordered_set<char> set;
        while(left < s.size() && right < s.size()){
            
            if(set.find(s[right])==set.end()){
                set.insert(s[right++]);
                maxLen = max(maxLen,right-left);
            }
            else
                set.erase(s[left++]);
            
        }
        return maxLen;
    }
};