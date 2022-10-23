class Solution {
public:
    int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
    int subarrayGCD(vector<int>& nums, int k) {
        int subArray =0;
        for(int i=0;i<nums.size();i++){
            int temp =0;
            for(int j=i;j<nums.size();j++){
                temp = gcd(temp,nums[j]);
                if(temp==k)subArray++;
                else
                    if(temp<k)break;
            }
        }
        return subArray;
    }
};