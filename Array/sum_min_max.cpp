
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int findSum(int A[], int N)
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < N; i++)
        {
            mini = min(mini , A[i]);
            // if (A[i] < min)
            //     min = A[i];
        }
        for (int i = 0; i < N; i++)
        {
            maxi = max(maxi , A[i]);

            // if (A[i] > max)
            //     max = A[i];
        }
        return (maxi + mini);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        int ans = ob.findSum(arr, n);
        cout << ans;
        cout << "\n";
    }
    return 0;
}
