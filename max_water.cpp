#include <iostream>
#include <algorithm>
using namespace std;

int maxWater(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    int maxWater = 0;

    while (left < right)
    {
        int width = right - left;
        int height = min(arr[left], arr[right]);
        int area = width * height;

        maxWater = max(area, maxWater);

        if (arr[left] < arr[right])
            left++;
        else
            right--;
    }

    return maxWater;
}

int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << maxWater(arr, size);
}
