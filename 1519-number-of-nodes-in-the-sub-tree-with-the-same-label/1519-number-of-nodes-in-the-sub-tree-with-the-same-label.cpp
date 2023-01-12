class Solution {
public:
    
    vector<int> dfs(int node, vector<int> adj[], vector<int> &visited, vector<int> &res, string &labels){
        
        visited[node] = 1;
        vector<int> cnt(26,0);
        cnt[labels[node]-'a']++;
        
        for(auto x:adj[node]){
            
            if(!visited[x]){
                
                vector<int> tmp = dfs(x,adj,visited,res,labels);
                for(int i=0;i<26;i++)
                    cnt[i]+=tmp[i];
                
            }
            
        }
        
        res[node] = cnt[labels[node]-'a'];
        return cnt;
        
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        
        vector<int> adj[n];
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        
        vector<int> visited(n,0);
        vector<int> res(n,0);
        
        dfs(0,adj,visited,res,labels);
        return res;
        
    }
};