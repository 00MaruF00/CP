#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll sz , ans = 0;
    cin >> sz;
    ll counter = 1 , ar[sz];
    for(int i = 0 ; i < sz ; i++)cin >> ar[i];
    sort(ar , ar + sz);
    for(int i = 0 ; i < sz ; i++){
        if(counter == ar[i])counter = ar[i] + 1;
        else if(ar[i] > counter) ans += (ar[i] - counter) , counter++;
    }
    cout << ans <<"\n";
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