class Solution
{
    public:
        bool isValid(string stringg)
        {
            if(stringg.size() % 2 !=0)return false;
            stack<char> s;
            for (auto x: stringg)
            {
                if (x == '(')
                    s.push(')');
                else if (x == '{')
                    s.push('}');
                else if (x == '[')
                    s.push(']');
                else if (s.size() == 0 || s.top() != x)
                    return false;
                else
                    s.pop();
            }
            if(s.size()>0)return false;
            return true;
        }
};