class Solution
{
    public:
        int longestConsecutive(vector<int> &nums)
        {

            if (nums.size() == 0) return 0;

            unordered_set<int> set(nums.begin(), nums.end());
            int longest_seq = 0;
            for (auto &i: nums)
            {
                if (set.count(i - 1) ==1)
                    continue;
                int num = i;
                int seq_count = 1;
                while (set.find(num + 1) != set.end())
                {
                    seq_count++;
                    num = num + 1;
                }
                longest_seq = max(longest_seq, seq_count);
            }
            return longest_seq;
        }
};