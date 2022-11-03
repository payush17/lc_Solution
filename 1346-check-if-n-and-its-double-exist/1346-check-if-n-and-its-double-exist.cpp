class Solution {
public:
    
    bool checkIfExist(vector<int>& arr) {
        set<int> set;
        string s= "ankit";
        cout<<s.length();
        for(int i=0;i<arr.size();i++){
            if(set.count( 2 *arr[i]) || !(arr[i]%2) && (set.count(arr[i]/2))  )
               return true;
                
                
                set.insert(arr[i]);
        }
        return false;
      
    }
};