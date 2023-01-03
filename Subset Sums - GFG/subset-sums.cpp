//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
     void dfs(vector<int> &arr,int i,vector<int> &ss,int sum){
         if(i==arr.size()){
             ss.push_back(sum);
             return;
         }
         dfs(arr,i+1,ss,sum);
         dfs(arr,i+1,ss,sum+arr[i]);
         
         
     }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here>
        vector<int> ss;
        dfs(arr,0,ss,0);
        sort(ss.begin(),ss.end());
        return ss;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends