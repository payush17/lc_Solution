class Solution
{
    public:
        int minimumAverageDifference(vector<int> &nums)
        {
            long right_sum = 0;
            int min_diff = INT_MAX;
            int n = nums.size();
            for (auto x: nums)
            {
                right_sum += x;
            }
        
            
          long ind = 0;
            long diff = 0;
           long local_sum = 0;
            long int i=0;
            while(i<n)
            {
                local_sum += nums[i];
                right_sum -= nums[i];
                if(i < n-1)
                diff = abs((local_sum /(i+1)) - ((right_sum) / (n-i-1)));
                else
                 diff = abs(local_sum/(i+1));
                
                
                if (diff<min_diff )
                {
                min_diff=diff;
                   ind =i;
                }
                i++;
            }
            return ind;
        }
};