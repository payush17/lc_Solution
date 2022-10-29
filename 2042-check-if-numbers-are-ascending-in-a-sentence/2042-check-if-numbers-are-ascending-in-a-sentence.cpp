class Solution
{
    public:
        bool areNumbersAscending(string s)
        {
            vector<int> num;
            for (int i = 0; i < size(s); i++)
            {
                if (isdigit(s[i]))
                {
                    string curr_num;
                    while (i < size(s) && isdigit(s[i]))	//for multiple digit
                        curr_num += s[i++];

                    num.push_back(stoi(curr_num));
                }
            }
            for (int i = 0; i < num.size() - 1; i++)
            {
                if (num[i] >= num[i + 1])
                    return false;
            }
            return true;
        }
};