class Solution
{
    public:
        vector<int> replaceElements(vector<int> &arr)
        {
            priority_queue<int> pq;
            int n = arr.size();
            vector<int> maxx(arr.size());
            maxx[n - 1] = -1;
           	//pq.push(arr[n-1]);
            int maxele = arr[n - 1];

            for (int i = n - 2; i >= 0; i--)
            {

                maxx[i] = maxele;
                if (arr[i] > maxele)
                    maxele = arr[i];
            }

            return maxx;
        }
};