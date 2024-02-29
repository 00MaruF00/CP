#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a , b , mn;
    cin >> a >> b;
    mn = (a + b)/4;
    cout << min({mn , a , b}) <<"\n";
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