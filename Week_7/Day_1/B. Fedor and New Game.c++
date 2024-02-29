#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n , sz , c , f , ans = 0;
    cin >> n >> sz >> c;
    int ar[sz];
    for(int i = 0 ;i < sz ; i++) cin >> ar[i];
    cin >> f;
    f = (f&((1<<n) - 1));
    for(int i = 0 ; i < sz ; i++){
        ar[i] = (ar[i] & ((1<<n) - 1));
        int x = ar[i]^f;
        if(__builtin_popcount(x) <= c)ans++;
    }
    cout << ans <<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0 ;
}