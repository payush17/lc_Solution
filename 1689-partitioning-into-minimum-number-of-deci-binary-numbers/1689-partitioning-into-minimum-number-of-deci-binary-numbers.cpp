class Solution {
public:
    int minPartitions(string n) {
        int min_prt = INT_MIN;
        for(auto x : n) 
            min_prt = max(min_prt, x-'0');
        return min_prt;
    }
};