class Solution
{
    public:
        void wiggleSort(vector<int> &nums)
        {
            priority_queue<int> pq1;
           	// priority_queue<int,vector<int>,greater < int>>pq2;
            for (int i = 0; i < nums.size(); i++)
            {
                pq1.push(nums[i]);
            }
           	//nums.clear();
            for (int i = 0; i < nums.size(); i++)
            {
                if (i % 2 != 0)
                {
                    nums[i] = pq1.top();
                    pq1.pop();
                }
            }
            for (int i = 0; i < nums.size(); i++)
            {
                if (i % 2 == 0)
                {
                    nums[i] = pq1.top();
                    pq1.pop();
                }
            }
        }
};