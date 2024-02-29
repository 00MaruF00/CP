#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    s = "#" + s;
    int l = 1 , r = n ;
    while(s[l] != s[r])l++,r--;
    cout << max(r - l + 1 , 0) <<'\n';
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