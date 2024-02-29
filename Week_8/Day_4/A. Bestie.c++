#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , g = 0 , ans = 10000000;
    cin >> sz;
    int ar[sz + 1];
    for(int i = 1 ; i <= sz ; i++)cin >> ar[i] , g = __gcd(g , ar[i]);
    if(g == 1)cout << 0 <<'\n';
    else {
        
    }
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