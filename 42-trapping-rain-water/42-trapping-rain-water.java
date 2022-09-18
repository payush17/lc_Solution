class Solution {

    public int trap(int[] height) {
        int leftp = 0, rightp = height.length - 1, leftMax = 0, rightMax = 0, totalWater = 0;
        while (leftp <= rightp) {
            leftMax = Math.max(height[leftp], leftMax);
            rightMax = Math.max(height[rightp], rightMax);
            if (leftMax < rightMax) {
                totalWater += leftMax - height[leftp];
                leftp++;
            } else {
                totalWater += rightMax - height[rightp];
                rightp--;
            }
        }
        return totalWater;
    }
}
