#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> nums)
{
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        // if (nums[j] == 0)         //move all zeros to Left side
        if (nums[j] != 0)            //move all zeros to Right side
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
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    moveZeroes(nums);
    return 0;
}