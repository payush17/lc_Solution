class Solution
{
    public:
        int maxOperations(vector<int> &nums, int k)
        {
            unordered_map<int, int> map;
            int maxOp = 0;
           	// for(auto x:nums)
           	//         map[x]++;
            int n = 0;
            int y = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                n = nums[i];
                y = k - n;
                if (map[y] > 0)
                {
                    maxOp++;
                    map[y]--;
                }
               else map[n]++;
            }
            return maxOp;
        }
};