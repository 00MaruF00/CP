#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a , b;
    cin >> a >> b;
    if(100 - a < 200 - 2*b)cout << "FIRST\n";
    else if(100 - a == 200 - 2*b)cout << "BOTH\n";
    else cout << "SECOND\n";
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