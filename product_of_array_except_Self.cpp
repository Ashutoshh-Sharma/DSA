#include <iostream>
#include <vector>
using namespace std;

vector<int> productArray(int arr[], int n)
{
    vector<int> ans(n);
    ans[0] = 1;
    for (int i = 1; i < n; i++)
    {
        ans[i] = arr[i - 1] * ans[i - 1];
    }

    int suffix = 1;
    for (int j = n - 2; j >= 0; j--)
    {
        suffix *= arr[j + 1];
        ans[j] *= suffix;
    }

    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans = productArray(arr, size);
    for (int val : ans)
    {
        cout << val << " ";
    }
}