#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int base , power , mod ;
    cin >> base >> power >> mod ;
    int ans = 1 , p = base;
    while(power){
        if(power&1)
            ans = (ans * p);
        p *= p;
        power = power >> 1;
    }
    cout << ans <<'\n';
    return 0 ;
}