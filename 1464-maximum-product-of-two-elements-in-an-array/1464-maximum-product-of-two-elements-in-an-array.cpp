class Solution
{
    public:
        int maxProduct(vector<int> &nums)
        {
            priority_queue<int, vector < int>, greater<int>> pq;
            for (int i = 0; i < nums.size(); i++)
            {
                pq.push(nums[i]);
                if (pq.size() > 2)
                    pq.pop();
            }
            int num1 = pq.top() - 1;
            pq.pop();
            int num2 = pq.top() - 1;
            return num1 * num2;
        }
};