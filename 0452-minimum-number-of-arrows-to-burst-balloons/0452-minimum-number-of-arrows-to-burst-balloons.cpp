class Solution
    {
    public:
         static bool cmp(vector<int> &x ,vector<int> &y){
             return x[1] <y[1];
         }
    
    
        int findMinArrowShots(vector<vector < int>> &points)
        {
            sort(points.begin(), points.end(),cmp);
            int minArrow = 0;
            bool merge = false;
            int x = points[0][1];
            for (int i = 0; i < points.size() - 1; i++)
            {

                if (x >= points[i+1][0])
                {
                    merge = true;
                }
                else
                {
                    x = points[i+1][1];

                    minArrow++;
                    merge = false;
                }
            }

            minArrow++;

            return minArrow;;
        }
};