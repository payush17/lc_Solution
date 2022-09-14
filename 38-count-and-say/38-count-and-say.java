class Solution {
    public String countAndSay(int n) {
        String str ="1";
        for(int i=1;i<n;i++){
          str =  count(str);
        }
        return str;
    }
    public String count(String str){
        if(str.length()==1)return "1" + str.charAt(0);
        String countandSay="";
        int count =1;int i=1;
        for(;i<str.length();i++){
            if(str.charAt(i)==str.charAt(i-1))
            count++;
            else{
                countandSay += String.valueOf(count)+str.charAt(i-1);
              count=1;
            }
            
        }
        countandSay += String.valueOf(count)+str.charAt(i-1);
        return countandSay;
    }
}