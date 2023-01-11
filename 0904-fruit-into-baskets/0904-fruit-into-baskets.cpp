class Solution
{
    public:
        int totalFruit(vector<int> &fruits)
        {
            unordered_map<int, int> fruitBasket;
            int maxFruits = 0;

            int left = 0;
            for (int right = 0; right < fruits.size(); right++)
            {
                fruitBasket[fruits[right]]++;
                while (fruitBasket.size() > 2 && left < right)
                {
                    fruitBasket[fruits[left]]--;
                    if (fruitBasket[fruits[left]] == 0)
                        fruitBasket.erase(fruits[left]);
                    left++;
                }
                maxFruits = max(maxFruits, right - left + 1);
            }
            return maxFruits;
        }
};