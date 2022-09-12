class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int start =0;
        int end = tokens.size()-1;
        int currPoints =0;
        int maxPoints =0;
        while(start<=end){
            if(power>= tokens[start]){//if power is greater than tokens
                currPoints++; //increse points
                power -= tokens[start];//decrease power 
                start++ ;
                maxPoints = max(maxPoints,currPoints);
                // move forward
            }
            else if(currPoints>0){
                currPoints--;
                power += tokens[end];
                end--;
            }
            else
                return maxPoints;
        }
        return maxPoints;
    }
};