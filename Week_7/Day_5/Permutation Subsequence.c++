#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int mod = 1e9+7;
void solve()
{
    ll sz , ans = 0 , mul = 1;
    map<int , int>mp;
    cin >> sz;
    for(int i = 0 ; i < sz ; i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    for(int i = 1 ; i <= 100000 ; i++){
        mul = (mul%mod *mp[i]%mod)%mod;
        if(!mul) break;
        ans = (ans%mod + mul%mod)%mod;
    }
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