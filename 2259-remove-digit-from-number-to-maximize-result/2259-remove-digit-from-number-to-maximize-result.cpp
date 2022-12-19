class Solution
{
    public:
        string removeDigit(string number, char digit)
        {
            string max = "0";

            for (int i = 0; i < number.length(); i++)
            {
                if (number[i] == digit)
                {
                    string str = number;
                    str = str.substr(0, i) + str.substr(i + 1, number.length() - 1);
                    if (str > max)
                        max = str;
                }
            }
            return (max);
        }
};