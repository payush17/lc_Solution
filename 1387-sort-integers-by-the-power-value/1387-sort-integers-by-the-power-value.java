class Solution {

    public int getKth(int low, int hi, int k) {
        List<Pair> power = new ArrayList<>();
    
        while(low<=hi){
            int x = low;
            int count =0;
            while(x!=1){
                if(x%2 == 0){
                    x /= 2;
                    count++;}
                else{
                    x = 3*x +1;
                    count++;
                }
            }
          power.add(new Pair(low,count) );
            low++;
            
        }
        Collections.sort(power,(a, b) -> a.pow - b.pow) ;
        return power.get(k-1).n;
        
        
    }
}
public class Pair
{
  int n ;int  pow;
    public  Pair(int  n, int pow)
  {
    this.n = n;
    this.pow = pow;
  }
}
