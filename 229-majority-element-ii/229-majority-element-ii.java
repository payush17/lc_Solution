class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int n= nums.length;
        ArrayList<Integer> ans = new ArrayList<>();
        int num1= -1,num2 =-1;int count1=0,count2=0;
        for(int i:nums){
            if(i==num1)count1++;
            else if(i==num2)count2++;
            else if(count1==0){
                num1=i;
                count1=1;
            }
            else if(count2==0){
                num2 =i;
                count2=1;
            }
            else {
                count1--;count2--;
            }
        }
        
      int fm =0;int sm =0;
        for(int i=0;i<n;i++){
            if(nums[i]==num1)fm++;
            else
                if(nums[i]==num2)sm++;
        }
        if(fm>n/3)ans.add(num1);
        if(sm>n/3)ans.add(num2);
        return ans;
    }
}