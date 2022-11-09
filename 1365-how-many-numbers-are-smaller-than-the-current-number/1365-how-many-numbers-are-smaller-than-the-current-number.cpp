class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // int count = 0 ; 
        int n = nums.size();
        
        vector<int> currentNumber ;
        for( int i = 0 ; i < n ; i++){
            int count = 0 ;
            for( int j = 0; j < n ; j++)
            {
                if( nums[i] > nums[j])
                count++;    
            }
            
             currentNumber.push_back(count);
        }
        return currentNumber ;
       
    }
   
};