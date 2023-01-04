class Solution
{
    public:
        vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector< int > &r)
        {
            vector<bool> check;

            for (int i = 0; i < l.size(); i++)
            {
                vector<int> temp;
                for (int j = l[i]; j <= r[i]; j++)
                {
                    temp.push_back(nums[j]);
                }
                sort(temp.begin(), temp.end());
                bool isSeq = true;
                for (int i = 2; i < temp.size(); i++)
                {
                    int fd = abs(temp[i - 2] - temp[i - 1]);
                    int sd = abs(temp[i - 1] - temp[i]);
                    if (fd != sd)
                        isSeq = false;
                }

                check.push_back(isSeq);
            }
            return check;
        }
};