class Solution
{
    public:
        long  computeValue(long num1, long num2, char operate)
        {
            if (operate == '+') return num1 + num2;
            else if (operate == '-') return num2 - num1;
            else if (operate == '*') return (num1 *num2);
            return num2 / num1;
        }

    int evalRPN(vector<string> &tokens)
    {
        stack<long> s;
        int len = tokens.size();
        for (int i = 0; i < len; i++)
        {
            if (tokens[i].size() == 1 && tokens[i][0] < 48)
            {
                long num1 = s.top();

                s.pop();
               long num2 = s.top();

                s.pop();
                string operate = tokens[i];
               long computed_value = computeValue(num1, num2, operate[0]);

                s.push(computed_value);
            }
            else
            {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};