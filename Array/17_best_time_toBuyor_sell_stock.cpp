#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxPro = 0, mn = INT_MAX;

        for (int i = 0; i < prices.size(); i++)
        {
            mn = min(mn, prices[i]);
            maxPro = max(maxPro, prices[i] - mn);
        }
        return maxPro;
    }
};
int main()
{
    Solution ob;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int ans = ob.maxProfit(prices);
    cout << ans << endl;
    return 0;
}