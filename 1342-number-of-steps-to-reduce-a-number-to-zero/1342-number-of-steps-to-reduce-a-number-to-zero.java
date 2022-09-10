class Solution {
   public int numberOfSteps (int num) {
        if(num == 0) return 0;
        int step = 0;
        while(num > 0) {
            step += ((num & 1) == 1 ) ? 2 : 1;
            num >>= 1;
        }
        return step - 1;
    }
}