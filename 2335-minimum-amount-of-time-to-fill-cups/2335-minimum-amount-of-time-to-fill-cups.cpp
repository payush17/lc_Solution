class Solution
{
    public:
        int fillCups(vector<int> &amount)
        {
             if(amount[0]+amount[1]+amount[2]==1)return 1;
             if(amount[1]+amount[2]+amount[0]==0)return 0;
            priority_queue<int> pq;
            pq.push(amount[0]);
            pq.push(amount[1]);
            pq.push(amount[2]);
            int ans = 0;
            for (; pq.size()>1 ; ans++)
            {
                int a = pq.top()-1;
                pq.pop();
                int b = pq.top()-1;
                pq.pop();
                if (a >0) pq.push(a );
                if (b >0) pq.push(b );
            }
            if(pq.size()) ans+= pq.top();

            return ans;
        }
};