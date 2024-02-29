#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    double n , m ;
    cin >> n >> m;
    n -= n/10;
    if(n > m)cout << "ONLINE\n";
    else if(m < n)cout << "DINING\n";
    else cout << "EITHER\n";
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