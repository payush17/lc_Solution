class Solution {
public:
    string removeOccurrences(string s, string part) {
      int substr_length=size(part);
        while(true){
            if(s.find(part)==string::npos)
                break;
            else
                s.erase(s.find(part),substr_length);
        }
      return s;
      
    }
};