#include <iostream>
using namespace std;

void buySellProfit(int price[], int n)
{
    int minPrice = price[0];
    int minDay = 0;
    int buyDay = 0, sellDay = 0;
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (price[i] - minPrice > maxProfit)
        {
            maxProfit = price[i] - minPrice;
            buyDay = minDay;
            sellDay = i;
        }

        if (price[i] < minPrice)
        {
            minPrice = price[i];
            minDay = i;
        }
    }

    cout << "You can buy on day " << buyDay
         << " and sell on day " << sellDay
         << " to get maximum profit of " << maxProfit;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    buySellProfit(arr, n);
    return 0;
}