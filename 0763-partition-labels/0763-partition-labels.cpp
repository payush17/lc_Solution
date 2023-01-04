class Solution
{
    public:
        vector<int> partitionLabels(string s)
        {
            vector<int> endingInd(26, 0);
            for (int i = 0; i < s.size(); i++)
            {
                endingInd[s[i] - 'a'] = i;
            }

            vector<int> ans;
            int startInd = 0;
            int endInd = 0;
            for (int i = 0; i < s.length(); i++)
            {
                endInd = max(endInd, endingInd[s[i] - 'a']);
                if (i == endInd)
                {
                    ans.push_back(i - startInd + 1);
                    startInd = i + 1;
                }
            }
            return ans;
        }
};