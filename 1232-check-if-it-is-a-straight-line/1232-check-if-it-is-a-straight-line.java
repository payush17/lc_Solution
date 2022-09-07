class Solution {
    public boolean checkStraightLine(int[][] c) {
        //slope formula y = mx +c where m is slope
        // y = mx or m =y/x here m = y2-y1/x2-x1
        int x = c[1][0]-c[0][0];
        int y = c[1][1]- c[0][1];
        for(int i=1;i<c.length;i++){
            int x2x1 = c[i][0] -  c[i-1][0];
            int y2y1 = c[i][1] - c[i-1][1];
            
            if(y2y1* x != x2x1*y)return false;
        }
        return true;
    }
}