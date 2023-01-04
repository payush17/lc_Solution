class Solution
{
    public:
        int numberOfBeams(vector<string> &banks)
        {
            int laserBeam = 0;int m = 0;
            for (int i = 0; i < banks.size(); i++)
            {
                
                int cnt = 0;
                for (int j = 0; j < banks[i].size(); j++)
                {
                    if (banks[i][j] == '1')
                        cnt++;
                }
                if(cnt !=0){
                laserBeam += m * cnt;
                m = cnt;
                }
                
            }
            return laserBeam;
        }
};