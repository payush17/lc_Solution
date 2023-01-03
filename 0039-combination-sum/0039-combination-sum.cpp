class Solution {
public:
    void dfs(vector<int>& candidates,int target,vector<vector<int>> &csum,vector<int> ans,int i){
        if(i==candidates.size()){
            if(target == 0){
                csum.push_back(ans);
            }
            return ;
        }
        if(candidates[i]<=target){
        ans.push_back(candidates[i]);
        dfs(candidates,target-candidates[i],csum,ans,i);
        ans.pop_back();
        }
        dfs(candidates,target,csum,ans,i+1);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> csum;
         vector<int> ans;
         dfs(candidates,target,csum,ans,0);
        return csum;
    }
};