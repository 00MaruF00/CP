#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , m , k , h;
    cin >>sz >> m >> k >> h;
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    int l = k , f = m*k - k , counter = 0;
    for(int i = 0 ; i < sz ; i++)
        if(abs(h - ar[i]) >= l && abs(h - ar[i]) <= f && abs(h - ar[i])%k == 0)counter++;
    cout << counter <<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    while(test--)
        solve();
    return 0 ;
}