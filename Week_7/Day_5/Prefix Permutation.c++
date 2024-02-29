#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a;
    cin >> a;
    if(a&1)cout << -1<<"\n";
    else for(int i = 2 ; i <= a ; i+=2)cout << i <<" "<<i-1<<" ";
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