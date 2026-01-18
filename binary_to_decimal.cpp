#include<iostream>
using namespace std;

int main(){
    int binary = 110010;
    int place = 1;
    int ans = 0;
    while(binary > 0){
        int remainder = binary % 10;
        ans = ans + remainder * place;
        place = place * 2;
        binary = binary / 10;
    }
    cout << ans;
}