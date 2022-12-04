class Solution
{
    public:
        long long dividePlayers(vector<int> &skill)
        {
            int n = skill.size();
            long long sum = 0;
            long long chem = 0;

            sort(skill.begin(), skill.end());
            sum = skill[0] + skill[n - 1];

            for (int i = 0; i < skill.size() / 2; i++)
            {
                long long num = skill[i];
                long long num2 = skill[n - i - 1];
                if (num + num2 != sum)
                    return -1;

                

                chem += num2 * num;
            }

            return chem;
        }
};