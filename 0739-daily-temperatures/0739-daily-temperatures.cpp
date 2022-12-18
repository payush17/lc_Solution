class Solution
{
    public:
        vector<int> dailyTemperatures(vector<int> &temp)
        {
            stack<int> st;
            vector<int> nextWarmday(temp.size());
            int nextday = 0;
            for (int i = temp.size()-1; i >= 0; i--)
            {
                while (st.size() > 0 && temp[i] >= temp[st.top()])
                {
                    st.pop();
                }

                if (st.empty())
                    nextWarmday[i] = 0;
                else
                {
                    nextWarmday[i] = st.top() - i;
                }

                st.push(i);
            }

            return nextWarmday;
        }
};