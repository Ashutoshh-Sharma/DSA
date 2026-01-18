#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void reverse(vector<int> &nums)
    {
        int start = 0;
        int end = nums.size() - 1;
        while (start < end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums = {34, 56, 24, 53, 27, 85, 22};
    s.reverse(nums);
    for (int val : nums)
    {
        cout << val << " ";
    }
    return 0;
}