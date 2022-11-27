class Solution
{
    public:
        int sumOfUnique(vector<int> &nums)
        {
            multiset<int> ms;
            for (auto it: nums)
                ms.insert(it);
            int unqiueEle_Sum = 0;
            for (auto x: ms)
            {
                if (ms.count(x) == 1)
                    unqiueEle_Sum += x;
            }
            return unqiueEle_Sum;
        }
};