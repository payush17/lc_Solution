class Solution
{
    public:
        vector<int> productExceptSelf(vector<int> &nums)
        {
            vector<int> res(nums.size());
            int mul = 1;
            for (int i = 0; i < nums.size(); i++)
            {
                mul *= nums[i];
                res[i] = mul;
            }
            mul = 1;
            for(int i = nums.size()-1;i>0;i--){
                res[i] = res[i-1]*mul;
                mul *= nums[i];
            }
            res[0]=mul;
            return res;
        }
};