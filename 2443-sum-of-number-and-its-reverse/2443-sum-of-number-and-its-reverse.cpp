class Solution {
public:
    int reverse(int num){
        
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
    }
    bool sumOfNumberAndReverse(int num) {
          if(num==0)return true;
          for(int i=num;i>0;i--){
            int j = reverse(i);
            if(i+j == num)
                return true;
        }
        return false;
    }
};