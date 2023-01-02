class Solution
{
    public:
        int minimumPartition(string s, int k)
        {

            int n = s.size();
            long long val = 0;
            int flg = 0;
            int res = 0;
            int i = 0;

            while (i < n)
            {

                val = s[i] - '0';
                while (i + 1 < n and(val *10 + s[i + 1] - '0') <= k)
                {

                    val *= 10;
                    val += s[i + 1] - '0';
                    i++;
                }

                i++;
                cout << val << endl;
                if (val > k)
                    return -1;

                res++;
            }
            return res;
        }
};