#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a ;
    cin >> a;
    if(a > 50){
        cout << (a - 50)/3 + ((a-50)%3)*2<<"\n";
    }
    else{
        if(a&1) cout << (50 - a)/2 + 3 <<"\n";
        else cout << (50 - a)/2 <<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0 ;
}