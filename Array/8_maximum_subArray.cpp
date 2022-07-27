// KADANE Algorithm

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // 1st approached
    long long maxSubarraySum(int arr[], int n)
    {
        int maxi = 0;
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi += arr[i];
            if (max < maxi)
            {
                max = maxi;
            }
            if (maxi < 0)
            {
                maxi = 0;
            }
        }
        return max;
    }
    // 2nd Approached
    long long SubarraySum(int arr[], int n)
    {
        long long maxi = 0;
        long long maxSum = 0;
        for (int i = 0; i < n; i++)
        {
            maxi += arr[i];
            maxSum = max(maxi, maxSum);
            if (maxi <= 0)
            {
                maxi = 0;
            }
        }
        return maxSum;
    }
};

//{ Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl; // 1st approached
        cout << ob.SubarraySum(a, n) << endl;    // 2nd approached
    }
}

// } Driver Code Ends