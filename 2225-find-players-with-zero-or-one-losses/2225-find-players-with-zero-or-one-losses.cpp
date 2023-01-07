class Solution
{
    public:
        vector<vector < int>> findWinners(vector<vector < int>> &matches)
        {
            vector<int> freq(100001, -1);
            vector<vector < int>> zeroOneLoss(2);
            int maxEle = -1;
            for (int i = 0; i < matches.size(); i++)
            {
                if (freq[matches[i][0]] == -1)
                    freq[matches[i][0]] = 0;
                if (freq[matches[i][1]] == -1)
                    freq[matches[i][1]] = 0;

                freq[matches[i][1]]++;
                maxEle = max(maxEle, max(matches[i][0], matches[i][1]));
            }

            for (int i = 1; i <= maxEle; i++)
            {
                if (freq[i] == 0) zeroOneLoss[0].push_back(i);
                if (freq[i] == 1) zeroOneLoss[1].push_back(i);
            }

            return zeroOneLoss;
        }
};