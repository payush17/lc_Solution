class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int total_gas=0,total_cost=0;
        for(int i=0;i<gas.length;i++){
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if(total_cost>total_gas)return -1;
        int total=0,start_index=0;
        for(int i=0;i<gas.length;i++){
            total += gas[i]-cost[i];
            if(total<0){
                total = 0;
                start_index=i+1;
            }
        }
        return start_index;
    }
}