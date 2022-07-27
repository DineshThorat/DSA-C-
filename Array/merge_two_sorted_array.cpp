#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        for (int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.begin() + m + n);
    }
};
int main()
{
    int m, n, a = 0, b = 0;
    cin >> m >> n;
    vector<int> arr1;
    vector<int> arr2;

    for (int i = 0; i < m; i++)
    {
        cin >> a;
        arr1.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b;
        arr1.push_back(b);
    }
    Solution ob;
    ob.merge(arr1, m, arr2, n);

    for (auto x : arr1)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << endl;

    return 0;
}