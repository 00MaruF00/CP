#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int mod = 1e9 + 7;
ll fact(ll x , ll y)
{
    ll ans = 1;
    while(y-- && x){
        ans = (ans%mod * x%mod)%mod;
        x--;
    }
    return ans;
}

void solve()
{
    ll number , color ;
    cin >> number >> color;
    cout << fact(color , number) << "\n";
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