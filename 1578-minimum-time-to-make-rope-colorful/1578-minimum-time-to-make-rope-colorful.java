class Solution {
    public int minCost(String colors, int[] neededTime) {
      int totalTime = 0, ptr = 1, idx =0;
        while(ptr<colors.length()){
            if(colors.charAt(idx) == colors.charAt(ptr)) {
                if(neededTime[idx] > neededTime[ptr]) {
                    totalTime += neededTime[ptr];
                    ptr++;
                    continue;
                } 
                totalTime += neededTime[idx];
            }
            idx = ptr;
            ptr++;
        }
        return totalTime;  
    }
}