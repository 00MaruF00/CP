#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i+=2)cout << i <<" ";
    for(int i = n - (n%2 != 0) ; i >= 2; i-=2) cout << i <<" ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tet;
    while(tet--)
        solve();
    return 0 ;
}