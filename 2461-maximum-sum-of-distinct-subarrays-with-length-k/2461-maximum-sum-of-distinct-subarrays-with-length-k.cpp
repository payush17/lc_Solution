class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long max_sum=0;long long curr_sum=0;
        unordered_map<int,int> map;
        for(int i=0;i<size(nums);i++){      
            curr_sum += nums[i];//add every ele in sum     
            map[nums[i]]++; // count freq of ele             

            if(i>=k-1){
                //we got  subarray of size k
                if(map.size()==k){
                    max_sum = max (max_sum,curr_sum);
                }
                curr_sum -= nums[i-k+1]; // substract ele from element 
                if(--map[nums[i-k+1]]==0) {
                    //erase ele from map 
                    map.erase(nums[i-k+1]);
                }


            }
            
        }
        return max_sum;
    }
};