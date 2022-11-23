class Solution
{
    public:
        vector<string> fizzBuzz(int n)
        {
            vector<string> fizzbuzz;
            for (int i = 1; i < n + 1; i++)
            {
                if (i % 3 == 0 && i % 5 == 0)
                {

                    fizzbuzz.push_back("FizzBuzz");
                    continue;
                }
                if (i % 3 == 0)
                {
                    fizzbuzz.push_back("Fizz");
                    continue;
                }

                if (i % 5 == 0)
                {
                    fizzbuzz.push_back("Buzz");
                    continue;
                }
                fizzbuzz.push_back(to_string(i));
            }
            return fizzbuzz;
        }
};