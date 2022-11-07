class Solution
{
    public:
       
    vector<int> sortJumbled(vector<int> &m, vector<int> &nums)
    {

        vector<pair<int, int>> v;
        vector<int> sorted;
        for (int i = 0; i < size(nums); i++)
        {
            int temp = (nums[i]);
            string str = "";
            if(temp==0) 
                str=to_string(m[0]);
             while(temp) {
                str=to_string(m[temp%10])+str;
                temp/=10;
            }

            
           v.push_back({stoi(str),i});
            
        }
        sort(begin(v),end(v));
        for (int i = 0; i < v.size(); i++)
        {
            sorted.push_back (nums[v[i].second]);
        }

        return sorted;
    }
};