class Solution {
    public int[] numsSameConsecDiff(int n, int k) {
        List<Integer> Number_contain = new ArrayList<>();
        if(n==1)
            Number_contain.add(0);
       
            Number_samediff(n,k,Number_contain,0);
        int [] ans = new int[Number_contain.size()];
        
        for(int i=0;i<Number_contain.size();i++)
            ans[i]= Number_contain.get(i);
        
     return ans;
    
    }
   
    
    
    
    
    public void Number_samediff(int n ,int k,List<Integer> ans,int num){
        if(n<=0)
        {
            ans.add(num);
            return ;
        }
        for(int i=0;i<10;i++){
            if(i==0 && num==0)continue;
          else  if(i!=0 && num==0)
              Number_samediff(n-1,k,ans,i);
            else
                if(Math.abs(num%10 -i)==k)
                    Number_samediff(n-1,k,ans,num*10+i);
        }
    }
}