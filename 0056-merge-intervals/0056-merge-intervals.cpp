class Solution
{
    public:
        vector<vector < int>> merge(vector<vector < int>> &intervals)
        {
            
            vector<vector < int>> merge;
            sort(intervals.begin(), intervals.end());

            for (int i = 0; i < intervals.size() - 1; i++)
            {
                int x = 0;
                if (intervals[i][1] >= intervals[i + 1][0])
                {
                    intervals[i + 1][0] = intervals[i][0];
                    intervals[i + 1][1] = max(intervals[i][1], intervals[i + 1][1]);
                }
                else
                {
                    merge.push_back(intervals[i]);
                }
            }
            merge.push_back(intervals[intervals.size() - 1]);

            return merge;
        }
};