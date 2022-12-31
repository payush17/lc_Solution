class Solution
{
    public:
        bool iscycle(int node, vector<int> &vis, vector<int> adjL[], vector<int> &dfsvis)
        {
            vis[node] = 1;
            dfsvis[node] = 1;
            for (auto it: adjL[node])
            {
                if (!vis[it])
                {
                    if (iscycle(it, vis, adjL, dfsvis)==true)
                        return true;
                }
                else if (dfsvis[it])
                    return true;
            }
            dfsvis[node] = 0;
            return false;
        }
    bool canFinish(int numCourses, vector<vector < int>> &prerequisites)
    {
        vector<int> adjL[numCourses];
        vector<int> vis(numCourses, 0);
        vector<int> dfsvis(numCourses, 0);
        int edges_len = prerequisites.size();
       	//creating adj List
        for (int i = 0; i < edges_len; i++)
        {
            adjL[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        for (int i = 0; i < numCourses; i++)
        {
            if (vis[i] == 0)
            {
                if (iscycle(i, vis, adjL, dfsvis) == true)
                    return false;
            }
        }
        return true;
    }
};