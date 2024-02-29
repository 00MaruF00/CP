#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a , b , c , d, e , f;
    cin >> a >> b >> c >> d >> e >> f;
    int x = 0 , y = 0 ;
    if((a < c && a < e) || (a > c && a > e)) x = min(abs(a-c) , abs(a-e));
    if((b < d && b < f) || (b > d && b > f))y = min(abs(d - b) , abs(b - f));
    cout << x + y + 1 <<"\n";
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