class Solution
{
    public:
        int hIndex(vector<int> &citation)
        {
            sort(citation.rbegin(), citation.rend());
            int hIndex = 0;
            int i = 1;
            for (; i <= citation.size(); i++)
            {
                if (citation[i - 1] < i)break;
                
                    hIndex = i;
                  
                

               
            }
            return hIndex;
        }
};