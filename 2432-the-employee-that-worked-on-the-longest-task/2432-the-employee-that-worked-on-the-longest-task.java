class Solution {
    public int hardestWorker(int n, int[][] logs) {
        int maxTime = logs[0][1];int empId = logs[0][0];
        for(int i=1;i<logs.length;i++){
            int currTime = logs[i][1] - logs[i-1][1];
            if(currTime > maxTime){
                maxTime = currTime;
                empId = logs[i][0];
            }
            else if(currTime == maxTime && empId>logs[i][0]){
                maxTime = currTime ;
                empId = logs[i][0]; 
            }
        }
        return empId;
    }
}