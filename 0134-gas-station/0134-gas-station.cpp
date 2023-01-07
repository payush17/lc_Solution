class Solution
{
    public:
        int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
        {
            int tank = 0;
            int curr_fuel = 0;
            int startInd = -1;
            for (int i = 0; i < gas.size(); i++)
            {
                curr_fuel += gas[i] - cost[i];
                if (curr_fuel < 0)
                {
                    tank += curr_fuel;
                    curr_fuel=0;
                    startInd =-1;
                }
                else if (startInd == -1)
                    startInd = i;
            }
            if (curr_fuel + tank >= 0) return startInd;
            return -1;
        }
};