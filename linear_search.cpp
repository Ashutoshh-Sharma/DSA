#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int linearSearch(vector<int> nums, int key)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == key)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {45, 34, 67, 23, 78};
    int key = 67;
    int present = s.linearSearch(nums, key);
    if (present != -1)
    {
        cout << "Yes this value is present at index " << present;
    }
    else
    {
        cout << "This value is not present in this array.";
    }
    return 0;
}