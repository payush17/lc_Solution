class Solution
{
    public:
    int digit(int n){
        int s=0;
        while(n>0){
            s += n%10;
            n /= 10;
        }
        return s;
    }
        

    int getLucky(string s, int k)
    {
        long long int num = 0;
        long long int res = 0;
        long int y = 0;

        for (auto x: s)
        {

            int temp = x - 'a' + 1;
            if (temp >= 10)
            {
                num += temp % 10;
                num += temp / 10;
            }
            else
                num += temp;
        }
        cout<<num;
        res = num;
        while(k>1){
           res = digit(res);
            --k;
        }
      return res;
    }
};