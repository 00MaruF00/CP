#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    int mx = min(abs(ar[0] - ar[1]) , abs(ar[sz - 1] - ar[sz - 2]));
    for(int i = 1 ; i < sz - 1; i++) mx = min(mx , max(abs(ar[i] - ar[i - 1]) , abs(ar[i] - ar[i + 1])));
    cout << mx <<"\n";
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