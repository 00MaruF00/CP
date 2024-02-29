#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll sz , minus = 0 , mn = 1e9+1 , zero = 0;
    ll sum = 0;
    cin >> sz;
    for(int i = 0 ; i < sz ; i++){
        ll ar;
        cin >> ar ;
        if(!ar)zero = 1;
        if(ar < 0) minus++ ;
        mn = min(mn , abs(ar));
        sum += abs(ar);
    }
    if(minus&1 && !zero)cout << sum - 2*mn <<"\n";
    else cout << sum <<"\n";

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