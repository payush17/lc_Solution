class StockSpanner {
    Stack<int[]> stack;

    public StockSpanner() {
        stack = new Stack<>();
    }

    public int next(int price) {
        int span = 0;
        while (stack.size() > 0 && stack.peek()[0] <= price) {
            span += stack.pop()[1];
        }
        span++;
        stack.push(new int[] { price, span });
        return span;
    }
}
// TC-O(n) SC - O(n) worst case all item are greater present in stack

//we can use two loop and trav back..... TC-O(n^2)

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */
