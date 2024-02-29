#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    if(n<11) cout << "Lower Double";
    else if(n < 16) cout << "Lower Single";
    else if(n <= 25) cout << "Upper Double";
    else cout << "Upper Single";
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