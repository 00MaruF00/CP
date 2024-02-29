#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n , k , counter = 0 ;
    cin >> n >> k;
    if(k > 30) cout << 0  <<"\n";
    else{
        for(ll i = 1 ; i <= n ; i++){
            ll x = i , y = n - i , v = k - 2;
            while(v--){
                ll m = x - y;
                x = y;
                y= m;
            }
            if(y >= 0 && x >= 0)
                counter++;
        }
        cout << counter <<"\n";
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