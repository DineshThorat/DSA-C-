// Find Kth Largest element

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};
int main()
{
    vector<int> nums = {3, 4, 1, 7, 8};

    int k;
    cin >> k;
    Solution o;
    cout << o.findKthLargest(nums, k);

    return 0;
}

