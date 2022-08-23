class Solution {
    public String largestOddNumber(String num) {
        int string_size = num.length();
        for(int i = string_size-1;i>=0;i--){
            if((num.charAt(i)+'0' )%2!=0)
               return  num.substring(0,i+1);
        }
        return "";
    }
}
