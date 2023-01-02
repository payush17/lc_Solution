class Solution
{
    public:
        bool detectCapitalUse(string word)
        {
            int capCnt = 0;
            for (int i = 0; i < word.size(); i++)
            {
                if (word[i] < 97)
                    capCnt++;
            }
            
            if (capCnt == 1){
                if(word[0]>96){
                    return false;
                }
                else
                    return true;
            }
            if(capCnt==0 || capCnt==word.size())
                return true;
            
           return false;
        }
};