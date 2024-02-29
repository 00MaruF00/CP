#include<bits/stdc++.h>
using namespace std;

int main()
{
    int base , power ;
    cin >> base >> power;
    int ans = 1;
    while(power != 0){
        if(power & 1) ans *= ans * base;
        else ans *= ans;
        power >>= 1;
    }
    cout << ans <<'\n';
    return 0;
}