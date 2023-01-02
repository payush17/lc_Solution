class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> minSteps;
       
        int steps=0;
        for(int i=0;i<boxes.size();i++){
            steps=0;
            for(int j=0;j<boxes.size();j++){
                int n = (boxes[j] - '0');
                steps += abs(i-j)*n;
            }
            minSteps.push_back(steps);
        }
        return minSteps;
    }
};