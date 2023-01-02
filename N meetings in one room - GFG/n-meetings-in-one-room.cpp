//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    bool static compare(vector<int> &a, vector<int> &b)
{
  if (a[1] == b[1])
    return a[0] < b[0];
  return a[1] < b[1];
}
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
{
  vector<vector<int>> meets;
  for (int i = 0; i < n; ++i)
    meets.push_back({start[i], end[i]});

  sort(meets.begin(), meets.end(), compare);
  int ans = 1;
  int ending = meets[0][1];

  for (int i = 1; i < n; ++i)
  {
    if (ending < meets[i][0])
    {
      ending = meets[i][1];
      ans++;
    }
  }

  return ans;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends