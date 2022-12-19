class Solution
{
    public:
        void exploreIsland(vector<vector < int>> &image, int sr, int sc, int color, int prevColor)
        {
            if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] == color)
                return;

            if (image[sr][sc] == prevColor)
            {
                image[sr][sc] = color;
                exploreIsland(image, sr + 1, sc, color, prevColor);
                exploreIsland(image, sr, sc - 1, color, prevColor);
                exploreIsland(image, sr - 1, sc, color, prevColor);
                exploreIsland(image, sr, sc + 1, color, prevColor);
            }
        }
    vector<vector < int>> floodFill(vector<vector < int>> &image, int sr, int sc, int color)
    {
        
        int prevColor = image[sr][sc];
        exploreIsland(image, sr, sc, color, prevColor);
        return image;
    }
};