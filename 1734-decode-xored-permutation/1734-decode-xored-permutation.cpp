class Solution
{
    public:
        vector<int> decode(vector<int> &encoded)
        {

            int n = encoded.size() + 1;
            vector<int> decode(n);
            int x = 0;
            for (int i = 1; i <= n; i++)
            {
                x = x ^ i;
            }
      
            int fst = 0;
            for (int i = 1; i < encoded.size(); i += 2)
            {
                x = x ^ encoded[i];
                
            }
    
            decode[0] = x;
            cout<<decode[0];
            for (int i = 0; i < encoded.size(); i++)
            {
                decode[i + 1] = decode[i] ^ encoded[i];
            }

            return decode;
        }
};