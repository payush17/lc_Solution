class Solution
{
    public:
        int digitsum(int n)
        {
            int sum = 0;
            while (n > 0)
            {
                sum += n % 10;
                n /= 10;
            }
            return sum;
        }
    int countBalls(int lowLimit, int highLimit)
    {
        vector<int> balls(46);
        for (int i = lowLimit; i < highLimit + 1; i++)
        {

            int ball = digitsum(i);
            balls[ball]++;
        }
        return *max_element(begin(balls), end(balls));
    }
};