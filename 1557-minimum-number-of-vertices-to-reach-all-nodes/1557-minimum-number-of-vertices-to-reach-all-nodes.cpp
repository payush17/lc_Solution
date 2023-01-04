class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> degree(n);vector<int>reach;
        for(auto x:edges){
            degree[x[1]]++;
        }
        for(int i=0;i<n;i++){
            if(!degree[i])
                reach.push_back(i);
        }
        return reach;
    }
};