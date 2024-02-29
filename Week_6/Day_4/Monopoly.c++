#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sum = 0 , mx = -1;
    for(int i = -1 ; i < 3 ; i++){
        int a;
        cin >> a;
        sum += a;
        mx = max(mx , a);
    }
    if(mx > sum-mx)cout << "YES\n";
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