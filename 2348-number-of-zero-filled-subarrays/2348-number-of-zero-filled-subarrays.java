class Solution {
    public long zeroFilledSubarray(int[] nums) {
        long sCount =0;
       long mCount =0;
        for(int i:nums){
            if(i==0)
            {
                sCount++;
            mCount += sCount;
            }
            else
                sCount=0;
        }
        return mCount;
    }
}