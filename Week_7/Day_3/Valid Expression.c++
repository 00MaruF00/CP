#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a , b , i; cin >> a >> b;
    int mx = a + 1 , mn = a;
    if(b > 0 && b <= mx){
        for(i = 1 ; i < b ; i++)cout << "+";
        for( ; i < mx ; i++)cout << "*";
    }
    else if(b > -mn && b <= 0){
        b = -b;
        for(i = 0 ; i <= b ; i++) cout << "-";
        for( ; i < mn ; i++)cout << "*";
    }
    else cout << -1;
    cout << "\n";
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