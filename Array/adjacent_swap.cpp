#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void adjacentSwap(vector<int> arr, int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < arr.size())
        {
            // swap(arr[i], arr[i + 1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
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
    arr.push_back(8);

    int size;
    adjacentSwap(arr, size);

    return 0;
}