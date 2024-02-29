#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a , b; cin >> a >> b;
    cout << min(a , b) + 2*max(0 , b - a) <<"\n";
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