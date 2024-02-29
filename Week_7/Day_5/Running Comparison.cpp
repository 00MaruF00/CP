#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    int ar[sz] , a[sz] , counter = 0;
    for(int i = 0 ; i < sz ; i++)cin >> ar[i];
    for(int i = 0 ; i < sz ; i++)cin >> a[i];
    for(int i = 0 ; i < sz ; i++)if(abs(ar[i] - a[i]) > 2)counter++;
    cout << counter <<"\n";
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