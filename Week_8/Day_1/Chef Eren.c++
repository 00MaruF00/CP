#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n , a , b;
    cin >> n >> a >> b;
    cout << ceil((float)n/2)*b + (n/2)*a<<"\n";
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