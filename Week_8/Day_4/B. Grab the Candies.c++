#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , evn = 0 , od = 0;
    cin >> sz;
    for(int i = 0 ; i < sz ; i++){
        int a;
        cin>> a;
        if(a&1)od+=a;
        else evn += a;
    }   
    if(evn>od)cout << "YES\n";
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