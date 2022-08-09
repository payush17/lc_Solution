
class Solution {
    public void combination(int ind,int target,int [] arr,List<List<Integer>>ans , List<Integer>ds){
      
            if(target==0){
                ans.add(new ArrayList<>(ds));
                return;
        }
        
    
    
    for(int k=ind;k<arr.length;k++){
        
        if(k>ind && arr[k]==arr[k-1]) continue;
        if(arr[k]>target)break;
        
        ds.add(arr[k]);    
      combination(k+1,target-arr[k],arr,ans,ds);
        ds.remove(ds.size()-1);
        
        
    }
    }
     
    
  

    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        Arrays.sort(candidates);
        combination(0,target,candidates,ans, new ArrayList<>());
            return ans;
    }
}
    