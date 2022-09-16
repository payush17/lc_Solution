class Solution {
    public String restoreString(String s, int[] indices) {
        char shuffletooriginal [] = new char [indices.length];
        for(int i=0;i<indices.length;i++){
            shuffletooriginal[indices[i]]=s.charAt(i);
        }
        return String.valueOf(shuffletooriginal);
    }
}