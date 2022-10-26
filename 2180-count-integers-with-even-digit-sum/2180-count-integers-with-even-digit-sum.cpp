class Solution {
public:
    int digitsum(int n){
        int s =0;
        while(n>0){
            s += n%10;
            n /= 10;
        }
        return s;
    }
    
    int countEven(int num) {
        int ds=0;int cnt=0;
        for(int i=1;i<=num;i++){
              ds = digitsum(i);
             if(ds%2==0)
                 cnt++;
        }
        return cnt;
        
    }
};