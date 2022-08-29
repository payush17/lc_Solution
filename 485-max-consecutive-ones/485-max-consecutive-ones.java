class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count=0;int count1=0;
        for(int i:nums){
            if(i==1)count++;
            else{
                count1 = Math.max(count1,count);
                count=0;
            }
        }
        return count > count1 ? count :count1;
    }
}