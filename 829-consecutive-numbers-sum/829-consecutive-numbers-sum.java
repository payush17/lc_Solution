class Solution {
    public int consecutiveNumbersSum(int n) {
        int summation_count=0;int cnt =1;
        while(n>0){
            
             n-= cnt;
            if(n%cnt == 0)
                summation_count++;
            cnt++;
        }
        return summation_count;
    }
}