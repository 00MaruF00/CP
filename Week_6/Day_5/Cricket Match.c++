#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int r , n ;
    cin >> r >> n;
    if(r > n*36)cout << "NO\n";
    else cout << "YES\n";
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