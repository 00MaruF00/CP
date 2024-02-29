#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , mx = 1e9+7;
    cin >> sz;
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    for(int i = 1 ; i < sz ; i++) mx = min(ar[i] - ar[i-1] , mx);
    if(mx < 0) cout << 0 <<"\n";
    else cout << mx/2 + 1<<"\n";
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