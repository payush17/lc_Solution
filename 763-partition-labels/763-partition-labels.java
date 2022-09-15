class Solution {
    public List<Integer> partitionLabels(String s) {
        if(s==null || s.length()==0)return null;
        List<Integer> outputArray = new ArrayList<>();
        int [] lastIndex = new int [26];//can also use hashmap but 26 letter in alphabet
        for(int i=0;i<s.length();i++){
            lastIndex[s.charAt(i)-'a'] = i;//update last index of every character
        }
        int start=0;
        int end=0;
        for(int i=0;i<s.length();i++){
            end = Math.max(end,lastIndex[s.charAt(i)-'a']);//get max last index of substring
            if(i==end){
                outputArray.add(end-start+1);//add substring length
                start=end+1;//update start to end next to get next substring length
                }
             }
        return outputArray;
        
    }
}