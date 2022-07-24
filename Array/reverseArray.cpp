#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverse(vector<int> arr, int m)
{
    int a = m + 1, b = arr.size() - 1;

    while (a <= b)
    {
        swap(arr[a], arr[b]);
        a++;
        b--;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(6);

    int m;
    cout<<"Enter the index : ";
    cin >> m;
    reverse(arr, m);

    return 0;
}