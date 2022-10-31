class Solution {
public:
    int heightChecker(vector<int>& heights) {
       int incorrect_h=0;
        vector<int> v(heights.size(),0);
        for(int i=0;i<heights.size();i++){
            v[i]=heights[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<heights.size();i++){
            if(v[i]!=heights[i])
                incorrect_h++;
            
        }
        return incorrect_h;
    }
};