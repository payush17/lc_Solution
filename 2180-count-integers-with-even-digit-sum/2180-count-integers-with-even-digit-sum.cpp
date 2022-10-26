class Solution {
public:
   bool digitsum(int n){
        int s=0;
        while(n>0){
             s += n%10;
            n /= 10;
        }
        return s %2 == 0;
    }
    
    
    int countEven(int num) {
       while(!digitsum(num)){
           num-- ;
       }
        return num/2;
    }
};