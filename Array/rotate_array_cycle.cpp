#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> temp(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            temp[(i + k) % nums.size()] = nums[i];
        }
        nums = temp;

        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    int k;
    cout << "Enter the key : ";
    cin >> k;
    Solution ob;
    ob.rotate(nums, k);

    return 0;
}