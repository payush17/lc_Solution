class Solution {
public:
    int minOperations(int n) {
        int minOp=0;
        for(int i=1;i<=n;i+=2){
            minOp += n-i;
        }
        return minOp;
    }
};