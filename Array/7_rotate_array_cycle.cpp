#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        rotate(a, n);
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

void rotate(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = 1; i <= n; i++)
    {
        arr[n - i + 1] = arr[n - i];
    }
    arr[0] = temp;
}