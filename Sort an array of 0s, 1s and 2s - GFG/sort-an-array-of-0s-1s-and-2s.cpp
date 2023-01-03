//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int nums[], int n)
    {
        // code here 
          int cnt0 = -1, cnt1 = -1, cnt2 = -1;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                {
                    nums[++cnt2] = 2;
                    nums[++cnt1] = 1;
                    nums[++cnt0] = 0;
                }
                else if (nums[i] == 1)
                {
                    nums[++cnt2] = 2;
                    nums[++cnt1] = 1;
                }
                else
                {
                    nums[++cnt2] = 2;
                }
            }
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends