#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute force
// int main()
// {
//     // vector<int> nums = {3, 2, 3};
//     vector<int> nums = {2,2,1,1,1,2,2};
//     for (int val : nums)
//     {
//         int freq = 0;
//         for (int el : nums)
//         {
//             if (val == el)
//             {
//                 freq++;
//             }
//         }
//         if (freq > nums.size() / 2)
//         {
//             cout << "Major elements is " << val;
//             break;
//         }
//     }
//     return 0;
// }

// Optimal approach
// int main()
// {
//     vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
//     sort(nums.begin(), nums.end());
//     int freq = 1;
//     int res = nums[0];
//     for (int i = 1; i < nums.size(); i++)
//     {
//         if (nums[i] == nums[i - 1])
//         {
//             freq++;
//         }
//         else
//         {
//             freq = 1;
//         }
//         if (freq > nums.size() / 2)
//         {
//             res = nums[i];
//         }
//     }
//     cout << res;
//     return 0;
// }

// Moore's voting algorithm
int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int freq = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
            freq = 1;
        }
        else if (nums[i] == ans)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    int count = 0;
    for (int i : nums)
    {
        if (i == ans)
        {
            count++;
        }
    }
    if (count > nums.size() / 2)
    {
        cout << "Majority element is " << ans;
    }
    else
    {
        cout << "There is no any majority elements.";
    }
    return 0;
}