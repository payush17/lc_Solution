class Solution
{
    public:
        int rob(vector<int> &nums)
        {
            int even_Sum = 0, odd_Sum = 0, max_sum = 0;

            for (int i = 0; i < nums.size(); i++)
            {

                if (i%2==0)
                {
                    even_Sum += nums[i];
                    even_Sum = max(even_Sum, odd_Sum);
                }
               
                if (i%2 !=0)
                {
                    odd_Sum += nums[i];
                    odd_Sum = max(even_Sum, odd_Sum);
                }
            }

            max_sum = max(even_Sum, odd_Sum);
            return max_sum;
        }
};