class Solution
{
    public:
        static bool cmp(int a, int b)
        {
            string x = to_string(a);
            string y = to_string(b);
            return x+y > y+x;
        }
    string largestNumber(vector<int> &nums)
    {

        string largestNum = "";
        sort(nums.begin(), nums.end(), cmp);

        for (auto val: nums)
        {
            largestNum += to_string(val);
        }
        return largestNum.front() == '0' ? "0" : largestNum;
    }
};