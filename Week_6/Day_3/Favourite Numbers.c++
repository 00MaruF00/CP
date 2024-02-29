#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    if(n%7 == 0 && n%2 == 0) cout << "Alice\n";
    else if(n%9 == 0 && n%2 == 1) cout << "Bob\n";
    else cout << "Charlie\n";
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