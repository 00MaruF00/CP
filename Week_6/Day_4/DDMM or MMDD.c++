#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b  ,c;
    char ch;
    cin >> a >> ch >> b >> ch >> c;
    if(a < 13 && b < 13) cout << "Both\n";
    else if(a < 13)cout << "MM/DD/YYYY\n";
    else cout << "DD/MM/YYYY\n";
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