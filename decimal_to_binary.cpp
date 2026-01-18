#include <iostream>
using namespace std;

int main()
{
    int decimal = 6;
    int ans = 0;
    int place = 1;
    while (decimal > 0)
    {
        int remainder = decimal % 2;
        ans = ans + remainder * place;
        place = place * 10;
        decimal = decimal / 2;
    }
    cout << ans;
}