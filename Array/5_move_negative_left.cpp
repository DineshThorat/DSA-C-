#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> nums)
{
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        // if (nums[j] >= 0)            //all negative to right
        if (nums[j] < 0)                // all negative to left
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums;
    nums.push_back(-12);
    nums.push_back(11);
    nums.push_back(-13);
    nums.push_back(0);
    nums.push_back(6);
    nums.push_back(-7);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    moveZeroes(nums);
    return 0;
}

