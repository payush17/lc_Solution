class Solution
{
    public:
        string longestDiverseString(int a, int b, int c)
        {
            string s = "";
            priority_queue<pair<int, char>> pq;
            if (a) pq.push({ a, 'a' });
            if (b) pq.push({ b,'b' });
            if (c) pq.push({ c,'c' });
            while (pq.size() > 1)
            {
                int x = pq.top().first;
                char xx = pq.top().second;
                pq.pop();
                int y = pq.top().first;
                char yy = pq.top().second;
                pq.pop();
                
                    if (x > y)
                    {
                        s += xx;
                        s += xx;
                        s += yy;
                        x -= 2;
                        y -= 1;
                    }
                    else if (y > x)
                    {
                        s += yy;
                        s += yy;
                        s += xx;
                        y -= 2;
                        x -= 1;
                    }
                    else
                    {
                        s += yy;
                        s += xx;
                        x -= 1;
                        y -= 1;
                    }

                    if(x!=0)  
                        pq.push({x,xx});
                    if(y!=0) 
                        pq.push({y,yy});
                
            }
            int length=s.size();
            char xxx = pq.top().second;
          
            if (pq.size() > 0 )
            {
                int x = pq.top().first;
                char xx = pq.top().second;
                if (x >= 2)
                {
                    s += xx;
                    s += xx;
                    x -= 2;
                }
               else if (x == 1)
                {
                    s += xx;
                    x -= 1;
                }
            }
            return s;
        }
};