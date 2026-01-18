#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int val : nums)
        {
            ans = ans ^ val;
        }
        return ans;
    }
};
int main()
{
    vector<int> nums = {4, 2, 1, 2, 1};
    // vector<int> nums = {2, 2, 1};
    Solution s;
    int ans = s.singleNumber(nums);
    cout << ans;
    return 0;
}