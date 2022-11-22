class Solution {
public:
    vector<int> sumZero(int n) {
    vector<int> zeroSum;
        
        if(n%2==0){
          for(int i=1;i<=n/2;i++){
              zeroSum.push_back(i);
              zeroSum.push_back(-i);
              }
        }
        if(n%2!=0){
            zeroSum.push_back(0);
             for(int i=1;i<=n/2;i++){
              zeroSum.push_back(i);
              zeroSum.push_back(-i);
              }
        }
        return zeroSum;
    }
};