//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        vector<int> prefix(n, 0);
         prefix[0] = A[0];
         for (int i = 1; i < n; ++i)
          prefix[i] = prefix[i - 1] + A[i];

        unordered_map<int, int> m;
       int ans = 0;
       for (int i = 0; i < n; ++i)
  {
        if (prefix[i] == 0)
      ans = max(ans, i + 1);
       if (m.find(prefix[i]) != m.end())
       {
        ans = max(ans, i - m[prefix[i]]);
       }
       else
      m[prefix[i]] = i;
  }

  return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends