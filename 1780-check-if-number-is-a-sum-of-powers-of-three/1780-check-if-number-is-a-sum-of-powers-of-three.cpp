class Solution {
public:
    bool checkPowersOfThree(int n) {
     stack<int> s;
        int mul3 =1;
        while(mul3<=n){
            s.push(mul3);
            mul3*=3;
        }
        int sum=0;
        while(s.size()){
            if(s.top()+sum<=n)
                sum+= s.top();
            s.pop();
        }
        return sum==n;
    }
};