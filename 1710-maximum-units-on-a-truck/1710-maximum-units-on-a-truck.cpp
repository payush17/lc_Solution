class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] > v2[1];
}
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        sort(boxTypes.begin(), boxTypes.end(), sortcol);
        int sum=0;int total_box=0;
       for(int i=0;i<n;i++){
           int curr_box = boxTypes[i][0];
           if(curr_box+total_box <= truckSize){
               total_box += curr_box;
               sum += curr_box*boxTypes[i][1];
           }
           // if exceed
           else{
               sum += (truckSize-total_box)*boxTypes[i][1];//add left one and break loop
               break;
               
           }
       }
        
        return sum;
    }
};