class Solution {
    public int splitArray(int[] nums, int m) {
         int low = findmin(nums); 
        int high = findmax(nums); 
        int split = high;
        while (low < high) {
            int mid = low + (high - low) / 2;
            int temp = getSubarray(mid, nums);
            if (temp <= m) {
                split = mid;
                high = mid;
            } else low = mid + 1;
        }
        return split;
    }

    private int getSubarray(int num, int[] nums) {
        int sum = 0;
        int split_count = 1; 
        for (int x : nums) {
            sum += x;
            if (sum > num) {
                sum = x;
                split_count++;
            }
        }
        return split_count;
    }

    private int findmin(int[] arr) {
        int low = 0;
        for (int x : arr) low = Math.max(low, x);
        return low;
    }

    private int findmax(int[] arr) {
        int sum = 0;
        for (int x : arr) sum += x;
        return sum;
    }
    }
