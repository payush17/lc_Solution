class Solution
{
    public:
        int minimumRounds(vector<int> &tasks)
        {
            unordered_map<int, int> map;
            for (int i = 0; i < tasks.size(); i++)
            {
                map[tasks[i]]++;
            }
            int minRnd = 0;
            int m = 0;
            for (auto x: map)
            {
                if (x.second < 2)
                    return -1;
                if(x.second%3==0){
                    m += x.second/3;
                }
                else{
                    m += x.second/3;
                    m +=1;
                }
                
              
            }
           
            return m;
        }
};