#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    for(int i = 0 ; i < (1 << sz) ; i++){
        ll sum = 0;
        for(int j = 0 ; j < sz ; j++){
            int x = (1 << j);
            if(i&x) sum += ar[j];
            else sum -= ar[j];
        }
        if(sum%360 == 0){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0 ;
}