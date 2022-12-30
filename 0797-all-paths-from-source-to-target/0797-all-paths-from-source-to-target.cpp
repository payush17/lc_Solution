class Solution
{
    public:
        void dfs(int curr_n, vector<vector < int>> &graph, int target, vector< vector< int >> &allpath, vector< int > &path)
        {

            path.push_back(curr_n);
            if (curr_n == target)
            {
                allpath.push_back(path);
            }
            for (int node: graph[curr_n])
            {
                dfs(node, graph, target, allpath, path);
            }
            path.pop_back();
        }

    vector<vector < int>> allPathsSourceTarget(vector<vector < int>> &graph)
    {
        int target = graph.size() - 1;
        vector<vector < int>> allpath;
        vector<int> path;

        dfs(0, graph, target, allpath, path);
        return allpath;
    }
};