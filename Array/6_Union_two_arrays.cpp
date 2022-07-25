#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int doUnion(int a[], int n, int b[], int m)
    {
        int i = 0;

        set<int> s;
        while (i < n)
        {
            s.insert(a[i]);
            i++;
        }
        i = 0;
        while (i < m)
        {
            s.insert(b[i]);
            i++;
        }
        return s.size();
    }

    // int findArrayIntersection(int arr1[], int n, int arr2[], int m)
    // {
    //     vector<int> ans;

    //     int i = 0;

    //     int j = 0;

    //     while (i < n && j < m)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             ans.push_back(arr1[i]);
    //             i++;
    //             j++;
    //         }
    //         else if (arr1[i] < arr2[j])
    //         {
    //             i++;
    //         }
    //         else if (arr1[i] > arr2[j])
    //         {
    //             j++;
    //         }
    //     }
    //     return ans;
    // }
};
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
        // cout << ob.findArrayIntersection(a, n, b, m) << endl;
    }

    return 0;
}
