class Solution
{
    public:
        bool checkDistances(string s, vector<int> &distance)
        {
            map<char, int> map;
            for (int i = 0; i < size(s); i++)
            {
                if (map.find(s[i]) == map.end())
                    map[s[i]] = i;
                   else
                {
                    int v = map[s[i]];
                    map[s[i]] = i - v;
                }
            }
          
            for ( int i=0;i<size(s);i++ )
                
            {
                int temp = s[i]-'0'-49;
                
                if (map[s[i]]!= distance[temp] + 1)
                   return false;
            }
            return true;
        }
};