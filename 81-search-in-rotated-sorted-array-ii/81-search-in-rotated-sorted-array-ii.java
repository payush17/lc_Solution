class Solution {
    public boolean search(int[] nums, int target) {
     //Brute force Linear Search
        for(int x: nums)
            if(x==target)return true;
        return false;
    }
}