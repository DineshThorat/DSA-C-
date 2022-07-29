#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void adjacentSwap(vector<int> arr, int m)
{

    for (int i = 0; i < m; i += 2)
    {
        if (i + 1 < arr.size())
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void reverse(vector<int> arr, int m)
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
    arr.push_back(9);

    int m;
    cout << "Enter the index : ";
    cin >> m;
    reverse(arr, m);
    cout<<endl;
    adjacentSwap(arr, m);
    cout<<endl;

    return 0;
}