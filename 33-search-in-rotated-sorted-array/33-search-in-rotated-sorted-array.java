class Solution {
    public int search(int[] arr, int x) {
       int l = 0, h = arr.length - 1;
        while (l <= h) {
            int mid = l + (h-l)/2;
            if(arr[mid]==x)return mid;
            
            if(arr[l]<=arr[mid]){
                if(x>=arr[l] && x<arr[mid])h=mid-1;
                else l=mid+1;
            }
            else{
                if(x>arr[mid] && x<=arr[h])l=mid+1;
                 else h=mid-1;
            }
        }
            return -1;

    }
}