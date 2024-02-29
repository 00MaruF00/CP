#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll x;
    cin >> x;
    if(x == 1) cout << -1<<"\n";
    else{
        ll a = sqrt(x);
        if(a*a == x) cout << a-1 <<" "<<a<<" "<<x - a*(a - 1) <<"\n";
        else cout << a << " " << a <<" "<< x - a*a <<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while(test--)
        solve();
    return 0 ;
}