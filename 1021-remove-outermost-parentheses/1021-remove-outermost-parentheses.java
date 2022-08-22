class Solution {
    public String removeOuterParentheses(String s) {
       char [] c = s.toCharArray();
        StringBuilder ans = new StringBuilder();
        int count =0;
        for(int i =0;i<c.length;i++){
            if(c[i]== '('){
                if(count>0) ans.append(c[i]);
                count++ ;
            }
            else{
              count--;
                if(count>0) ans.append(c[i]);
             
            }
            }
        return ans.toString();
    }
}

