class StockSpanner {
public:
    stack<pair<int,int>>stack;
    int i=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
       int span = 0;
        while (!stack.empty() && stack.top().second <= price) {
            
            stack.pop();
        }
        if(stack.empty()){
            stack.push({i,price});
            i++;
            return i;
        }
        
        else
        {
            int span =i-stack.top().first;
            stack.push({i,price});
            i++;
            return span;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */