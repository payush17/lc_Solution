class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
       int n = nums.size();
        int a;int b;int c;
        sort(nums.rbegin(),nums.rend());
        for(int i=1;i<n-1;i++ ){
            a = nums[i-1];b=nums[i];c=nums[i+1];
            if(a<b+c)
                return a+b+c;
        }
        return 0;
    }
};