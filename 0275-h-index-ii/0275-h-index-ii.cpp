class Solution {
public:
    int hIndex(vector<int>& citations) {
        int i=0;
        priority_queue<int> pq(citations.begin(),citations.end());
        for(;pq.size()>0 && i<pq.top();i++)
            pq.pop();
        return i;
    }
};