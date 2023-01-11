class Solution
{
    public:
        int longestOnes(vector<int> &nums, int k)
        {
            int left = 0;
            vector<int> freq(2);
            int continuousOne_cnt = 0;
        
            for (int right = 0; right < nums.size(); right++)
            {
                freq[nums[right]]++;
                while (freq[0] > k && left <= right)
                {
                    freq[nums[left]]--;
                    left++;
                }

                continuousOne_cnt = max(continuousOne_cnt, right - left + 1);
            }
            return continuousOne_cnt;
        }
};