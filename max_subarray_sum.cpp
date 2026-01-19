#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Brute force
// int main()
// {
//     int n = 7;
//     // int arr[n] = {1, 2, 3, 4, 5};
//     int arr[n] = {3, -4, 5, 4, -1, 7, -8};
//     int currsum;
//     int maxsum = INT_MIN;

//     for (int st = 0; st < n; st++)
//     {
//         currsum = 0;
//         for (int end = st; end < n; end++)
//         {
//             currsum += arr[end];
//             maxsum = max(currsum,maxsum);
//         }
//     }
//     cout<< "Max subarray sum = " << maxsum;
//     return 0;
// }

// Kadane's Algorithm
int main()
{
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        maxsum = max(currsum, maxsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << "The maximum subarray sum is : " << maxsum;
    return 0;
}