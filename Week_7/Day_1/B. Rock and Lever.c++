#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    unordered_map<int , ll>mp;
    for(int i = 0 ; i < sz ; i++){
        ll a;
        cin >> a;
        ll counter = __lg(a);
        mp[counter]++;
    }
    ll ans = 0;
    for(auto iter : mp)
        ans += ((iter.second)*(iter.second - 1))/2;
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