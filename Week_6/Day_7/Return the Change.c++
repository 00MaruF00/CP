#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int x;
    cin >> x;
    if(x%10 < 5) x -= x%10;
    else x += (10 - x%10);
    cout << 100 - x <<"\n";
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