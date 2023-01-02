class Solution
{
    public:
        vector<int> rearrangeArray(vector<int> &nums)
        {
           	// BF
            vector<int> pos;
            vector<int> neg;
            vector<int> Posneg;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] > 0) pos.push_back(nums[i]);
                else neg.push_back(nums[i]);
            }
            for (int i = 0; i < nums.size() / 2; i++)
            {
                Posneg.push_back(pos[i]);
                Posneg.push_back(neg[i]);
            }
            return Posneg;
        }
};