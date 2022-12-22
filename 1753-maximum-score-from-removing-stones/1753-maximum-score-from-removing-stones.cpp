class Solution
{
    public:
        int maximumScore(int a, int b, int c)
        {
//             priority_queue<int> pq;
//             pq.push(a);
//             pq.push(b);
//             pq.push(c);
//             int maxScore = 0;
//             for (;pq.size()>1; maxScore++)
//             {
                
//                 int max1 = pq.top();
//                 pq.pop();
//                 int max2 = pq.top();
//                 pq.pop();
//                 if (--max1 > 0) pq.push(max1);
//                 if (--max2 > 0) pq.push(max2);
//             }
//             return maxScore;
            
        if(a+b<c)return a+b;
        if(b+c<a)return b+c;
        if(a+c<b)return a+c;
        return (a+b+c)/2;
        }
};