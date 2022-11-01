class Solution
{
    public:
        bool checkDistances(string s, vector<int> &distance)
        {
            map<int, int> map;
            for (int i = 0; i < size(s); i++)
            {
                if (map.find(s[i]-'a') == map.end())
                    map[s[i]-'a'] = i;
                   else
                {
                    int dist_bet = (i- map[s[i]-'a'])-1;
                   if(dist_bet != distance[s[i]-'a'])
                       return false;
                }
            }
          
         //   for ( int i=0;i<size(s);i++ )
         //       
          //  {
          //      int temp = s[i]-'0'-49;
                
           //     if (map[s[i]]!= distance[temp] + 1)
           //        return false;
           // }
            return true;
        }
};