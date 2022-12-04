class Solution
{
    public:
        long long dividePlayers(vector<int> &skill)
        {
            int n= skill.size();
            long long sum = 0;
            long long chem =0;
            for (auto x: skill)
                sum += x;
            
            if (sum % (n / 2) != 0)
                return -1;
            
            sort(skill.begin(),skill.end());
            
            long long avg = sum / (n / 2);
            
            for(int i=0;i<skill.size()/2;i++){
                long long num = skill[i];
                long long num2 = skill[n-i-1];
                if(num+num2 != avg)
                    return -1;
                
                 num = num2*num;
                
                chem += num;
            }

            return chem;
        }
};