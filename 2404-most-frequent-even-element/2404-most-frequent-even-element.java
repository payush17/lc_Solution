class Solution {

    public int mostFrequentEven(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();

        int max = -1;
        int res = Integer.MAX_VALUE;

        for (int i : nums) {
            if (i % 2 == 0) {
                map.put(i, map.getOrDefault(i, 0) + 1);
                 int x = map.get(i);
                if (x > max) { 
                    max = Math.max(max,x);
                    res = i;
                } else if (x == max && res > i) { 
                    res = i;
                }
            }
        }

        return res == Integer.MAX_VALUE ? -1 : res;
    }
}
