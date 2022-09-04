class Solution {
    public int shipWithinDays(int[] weights, int days) {
      int low = findmin(weights);//max ele in array
     int high = findmax(weights);// sum of array
        int least_weight = high;
        while(low<high){
            int mid = low + (high-low)/2;
            int temp =getweight(mid,weights);
            if(temp<=days){
                least_weight=mid;
                high=mid;
            }
            else low=mid+1;
            
        }
        return least_weight;
    }
    private int getweight(int num,int [] weights ){
        int sum =0;
        int count =1;//bc there alreasy exists 1
        for(int x:weights ){
            sum += x;
            if(sum> num){
                sum= x;
                count++;
            }
            
        }
        return count;
    }
    
    
    
    
    
    
    
    private int findmin(int [] arr){
        int low=0;
        for(int x:arr)
          low = Math.max(low,x);
        return low;
    }
    private int findmax(int [] arr){
        int sum =0;
        for(int x: arr)
            sum += x;
        return sum;
    }
    
}