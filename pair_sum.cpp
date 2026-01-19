#include <iostream>
#include <vector>
using namespace std;

// Brute force
// int main()
// {
//     vector<int> nums = {2, 7, 11, 15};
//     vector<int> result;
//     int target = 22;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 result.push_back(i);
//                 result.push_back(j);
//             }
//         }
//     }
//     for (int i : result)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

// Optimal approach
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> result;
    int target = 17;
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        if (nums[start] + nums[end] == target)
        {
            result.push_back(start);
            result.push_back(end);
            break;
        }
        else if (nums[start] + nums[end] > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    for (int i : result)
    {
        cout << i << " ";
    }
}