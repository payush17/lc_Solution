class Solution
{
    public:
        bool isSelfdivisible(int x)
        {
            int num = x;
            while (x > 0)
            {

                int y = x % 10;

                x = x / 10;
                if (y == 0 || num % y != 0) return false;
            }
            return true;
        }
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> selfDivisible;
        for (int i = left; i <= right; i++)
        {
            if (isSelfdivisible(i))
                selfDivisible.push_back(i);
        }
        return selfDivisible;
    }
};