class Solution
{
    public:
        int largestInteger(int num)
        {
            priority_queue<int> p_odd;
            priority_queue<int> p_even;
            string str = to_string(num);
            for(int i=0;i<str.length();i++){
                if((str[i]-'0')%2==0)
                    p_even.push(str[i]-'0');
                else
                    p_odd.push(str[i]-'0');
            }
            int largest_num=0;
            for(int i=0;i<str.size();i++ ){
                 largest_num *= 10;
                if((str[i]-'0')%2==0){
                    largest_num +=  p_even.top();
                    p_even.pop();
                }
                else{
                    largest_num += p_odd.top();
                    p_odd.pop();
                }
               
            }
            return largest_num;
        }
};