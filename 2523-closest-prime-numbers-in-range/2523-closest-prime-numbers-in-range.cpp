class Solution
{
    public:
        int m = 1e6;
    void SieveOfEratosthenes(int n, vector<bool> &prime)
    {
        prime[0]=prime[1]=0;
        for(int i=2;i*i<=n;i++){
            if(prime[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=0;
                }
            }
        }
    }
    vector<int> closestPrimes(int left, int right)
    {
        vector<bool> isPrime(m + 1, 1);
        SieveOfEratosthenes(m, isPrime);
        vector<int> ans{ -1, -1 };
        vector<int> prime;
        for (int i = left; i <= right; i++)
        {
            if (isPrime[i] == 1)
                prime.push_back(i);
        }
        int mini = 1e8;
        for (int i = 1; i < prime.size(); i++)
        {
            if (prime[i] - prime[i - 1] < mini)
            {
                ans = { prime[i - 1],prime[i]};
                mini = prime[i] - prime[i - 1];
            }
        }
        return ans;
    }
};