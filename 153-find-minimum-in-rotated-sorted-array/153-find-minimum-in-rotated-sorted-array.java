class Solution {
    public int findMin(int[] arr) {
         int low = 0, high = arr.length - 1;//int min =Integer.MAX_VALUE;
        while (low <high) {
            int mid = low + (high-low)/2;
           // min= Math.min(arr[mid],min);
            if(arr[high]>arr[mid])
            
                high = mid;
            
            else
                low = mid+1;
            
            
            
            
            
            
            
            
            
            
        }
            return arr[low];
    }
}