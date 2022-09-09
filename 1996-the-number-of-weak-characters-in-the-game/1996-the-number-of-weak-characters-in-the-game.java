class Solution {

    public int numberOfWeakCharacters(int[][] properties) {
        //first time sorting with customizatiom
        int len = properties.length;
        Arrays.sort(properties,(a, b) -> {
                if (a[0] == b[0]) {
                    return b[1] - a[1];
                }
                return a[0] - b[0];
            });

        int weak_ch=0; int max= Integer.MIN_VALUE;
        for(int i=len-1;i>=0;i--){
            if(properties[i][1]<max){
                weak_ch++;
            }
            else
                max = Math.max(max,properties[i][1]);
        }
        return weak_ch;
    }
}
