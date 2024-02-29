#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;

void solve()
{
    int sz , k;
    cin >> sz >> k;
    ll ans = 1;
    for(int i = 1 ; i <= k ; i++) ans = (ans * sz)%mod;
    cout << ans <<"\n";
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