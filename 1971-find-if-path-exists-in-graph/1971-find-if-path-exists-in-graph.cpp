class Solution
{
    public:
        void createGraph(vector<vector < int>> edges, unordered_map< int, vector< int>> &graph)
        {
            for (int i = 0; i < edges.size(); i++)
            {
                graph[edges[i][0]].push_back(edges[i][1]);
                graph[edges[i][1]].push_back(edges[i][0]);
            }
        }

    bool validPath(int n, vector<vector < int>> &edges, int source, int destination)
    {
        unordered_map<int, vector < int>> graph;
        createGraph(edges, graph);

        vector<bool> visited(n + 1, false);
        queue<int> q;
        if (source == destination) return true;
        visited[source] = true;
        q.push(source);
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (auto x: graph[u])
            {
                if (visited[x] == false)
                {
                    visited[x] = true;
                    q.push(x);
                }
            }
        }
        return visited[destination] == true;
    }
};