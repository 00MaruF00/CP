#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , mark;
    cin >> sz >> mark;
    int ar[sz];
    for(int i = 0  ; i < sz ; i++) cin >> ar[i];
    sort(ar , ar + sz , greater<int>());
    cout << ar[mark - 1] - 1 <<"\n";
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