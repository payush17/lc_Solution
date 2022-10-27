class Solution
{
    public:

        int getLucky(string s, int k)
        {
            long long int num = 0;
            long long int res = 0;
            long int y = 0;

            for (auto x: s)
            {

                int temp = x - 'a' + 1;
                if (temp >= 10)
                {
                    num += temp % 10;
                    num += temp / 10;
                }
                else
                    num += temp;
            }

            for (int i = 2; i <= k; i++)
            {
                int sum = 0;

                while (num)
                {
                    sum += num % 10;
                    num /= 10;
                }
                num = sum;
            }
            return num;
        }
};