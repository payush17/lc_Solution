class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int num1 = -1, num2 = -1;
        int count1 = 0, count2 = 0;
        for (int i: nums)
        {
            if (i == num1) count1++;
            else if (i == num2) count2++;
            else if (count1 == 0)
            {
                num1 = i;
                count1 = 1;
            }
            else if (count2 == 0)
            {
                num2 = i;
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        int fstm = 0;
        int sndm = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == num1) fstm++;
            else if (nums[i] == num2) sndm++;
        }
        if (fstm > n / 3) ans.push_back(num1);
        if (sndm > n / 3) ans.push_back(num2);
        return ans;
    }
};