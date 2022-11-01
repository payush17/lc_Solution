class Solution {
public:
     void getDigit(int n,vector<int> &v){
         int i=0;
         while(n>0){
             v[i++]=n%10;
             n /= 10;
         }
     }
    
    
    int minimumSum(int num) {
        vector<int> v(4,-1);
        getDigit(num,v);
        sort(v.begin(),v.end());
        int num1=0;int num2=0;
        
            num1 = v[0]*10 + v[2];
            num2 = v[1]*10 + v[3];
        
    
        
     return num1+num2;   
    }
};