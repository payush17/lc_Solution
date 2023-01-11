class Solution {
public:
    int dfs(int node, vector<int> adjL[],vector<bool>& hasApple,vector<bool> &isVisited){
        isVisited[node]=1;
        bool flag =0;
        if(hasApple[node])
            flag=1;
        
        int ans=0;
        for(auto x : adjL[node]){
            if(isVisited[x]==0){
                ans += dfs(x,adjL,hasApple,isVisited);
            }
        }
        if(ans > 0 or flag)
            ans += 2;
        
        
        return ans;
              
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<int> adjL[n];
        for(auto &x : edges){
            int u = x[0],v = x[1];
            adjL[u].push_back(v);
            adjL[v].push_back(u);
        }
         vector<bool> isVisited(n,0);
         int val = dfs(0,adjL,hasApple,isVisited);
         if(val >= 2)
             val -= 2;
        
        
        return val;
    }
};