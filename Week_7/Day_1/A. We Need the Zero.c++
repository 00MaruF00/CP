#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , ans = 0;
    cin >> sz;
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i] ;
    for(int i = 0 ; i < (1 << 8) ; i++){
        ans = i^ar[0];
        for(int j = 1 ;  j < sz ; j++)
            ans^=(ar[j]^i);
        if(!ans) {
            cout << i <<"\n";
            return;
        }
    }
    cout << -1 <<"\n";
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