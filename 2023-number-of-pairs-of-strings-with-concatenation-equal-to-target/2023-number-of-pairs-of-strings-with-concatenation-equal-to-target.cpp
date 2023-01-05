class Solution
{
    public:
        int numOfPairs(vector<string> &nums, string target)
        {
            string s = "";
            int pair = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                s = "";
                for (int j = 0; j < nums.size(); j++)
                {
                    if (i != j && nums[i] + nums[j] == target)
                        pair++;
                }
            }
            return pair;
        }
};