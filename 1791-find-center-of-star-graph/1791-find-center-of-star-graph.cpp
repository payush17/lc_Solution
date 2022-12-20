class Solution
{
    public:
        int findCenter(vector<vector < int>> &edges)
        {
           	//     int n = edges.size();
           	//     vector<int> star(n + 2, 0);
           	//     for (auto t: edges)
           	//     {
           	//         star[t[0]]++;	
           	//         star[t[1]]++;	//indegree
           	//     }
           	//     for (int i = 1; i < n + 2; i++)
           	//     {
           	//         if (star[i] == n)	//indegree should be n
           	//             return i;
           	//     }
            if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
                return edges[0][0];
            else return edges[0][1];
            return 0;
        }
};