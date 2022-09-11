class Solution {
    public int partitionString(String s) {
        int subString =1;//no parttion
        Set<Character> set = new HashSet<>();
        for(int i =0;i<s.length();i++){
            if(!set.contains(s.charAt(i)))
                set.add(s.charAt(i));
            else{
                subString++;
                set.clear();
                set.add(s.charAt(i));
            }
        }
        return subString;
    }
}