#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , x = 0 , y = 0;
    cin >> sz;
    bool ok = false;
    for(int i = 0 ; i < sz ; i++){
        char ch;
        cin >> ch;
        if(ch == 'U')y++;
        else if(ch == 'D')y--;
        else if(ch == 'R')x++;
        else x--;
        if(x == 1 && y == 1)ok = true;
    }
    if(ok)cout << "YES\n";
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