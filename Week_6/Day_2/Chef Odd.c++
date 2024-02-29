#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n , k;
    cin >> n >> k;
    ll x = n/2 - (n%2 != 0) ;
    if(x >= k && (x - k)%2 == 0) cout << "YES\n";
    else cout << "NO\n";
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