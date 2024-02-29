#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    if(!n)cout << "8 9 2 10\n";
    else cout << 1LL << " "<< 2LL <<" "<< ((1LL << 32LL)) <<" "<<(n^(1LL << 32LL))<<"\n";
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