#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    ll ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    sort(ar , ar + sz);
    ll sum = 1;
    for(int i = 0 ; i < sz ; i++){
        if(sum < ar[i]){
            cout <<"NO\n";
            return;
        }
        if(!i)continue;
        sum += ar[i];
    }
    cout << "YES\n";
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