#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int x , y;
    cin >> x >> y;
    if(y/2 < x) cout << y*2 + x <<"\n";
    else cout << 5*x <<"\n";
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