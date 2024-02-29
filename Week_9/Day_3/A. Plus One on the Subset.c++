#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int mx = -100 , mn = 1000000001;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        mx = max(mx , a);
        mn = min(mn , a);
    }
    cout << mx - mn <<"\n";
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