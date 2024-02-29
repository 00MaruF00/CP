#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a , b;
    cin >> a >> b;
    if(2*b>=a)cout << "YES\n";
    else cout << "NO\n";
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