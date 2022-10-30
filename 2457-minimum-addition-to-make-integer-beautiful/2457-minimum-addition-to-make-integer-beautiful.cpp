class Solution {
public:
    long long digitsum(long long n){
        
        long long sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        if(n==target)return 0;
        long long ans =0;
        long long p =1;
        
        while(n>0 && digitsum(n)>target){
            int digit = n%10;
            if(digit!=0){
                ans = ans + p *(10-digit);
                n = n/10;
                n++;
                
            }
            else{
                n = n/10;
            }
            p *= 10;
        }
            
        
        
        return ans;
    }
};