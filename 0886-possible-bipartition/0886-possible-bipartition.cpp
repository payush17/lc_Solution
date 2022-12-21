class Solution
{
    public:
        bool possibleBipartition(int n, vector<vector < int>> &dislikes)
        {

            vector<int> color(n + 1, -1);
            vector<int> adj[n + 1];
            for (int i = 0; i < dislikes.size(); i++)
            {
                adj[dislikes[i][0]].push_back(dislikes[i][1]);
                adj[dislikes[i][1]].push_back(dislikes[i][0]);
            }
            for (int i = 1; i <= n; i++)
            {
                if (color[i] != -1)
                    continue;

                queue<int> q;

                q.push(i);
                color[i] = 0;

                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    for (auto &it: adj[node])
                    {
                        if (color[it] == -1)
                        {
                            color[it] = !color[node];
                            q.push(it);
                        }
                        else if (color[it] == color[node]) return false;
                    }
                }
            }
            return true;
        }
};