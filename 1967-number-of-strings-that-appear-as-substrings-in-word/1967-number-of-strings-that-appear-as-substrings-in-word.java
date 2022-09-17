class Solution {
    public int numOfStrings(String[] patterns, String word) {
        int subString = 0;
        for(String p: patterns){
            if(word.contains(p)){
                subString++;
            }
        }
        return subString; 
    }
}