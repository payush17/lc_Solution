class Solution
{
    public:
        int similarPairs(vector<string> &words)
        {
            int n = words.size();
            int similarPair = 0;
            for (int i = 0; i < n - 1; i++)
            {

                set<char> st1;
                for (auto x: words[i])
                {
                    st1.insert(x);
                }
                for (int j = i + 1; j < n; j++)
                {
                    set<char> st2;
                    for (auto x: words[j])
                    {
                        st2.insert(x);
                    }
                    if (st1 == st2)
                    {
                        similarPair++;
                    }
                }
            }
            return similarPair;
        }
};