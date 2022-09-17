class Solution {
    public int maximum69Number (int num) {
        String max = Integer.toString(num);
        max = max.replaceFirst("6","9");
        return Integer.parseInt(max);
    }
}