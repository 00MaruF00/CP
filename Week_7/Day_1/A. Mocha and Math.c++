#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz ;
    cin >> sz;
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    for(int i = 0 ; i < sz ; i++)
        for(int j = 0 ; j < sz; j++)
            ar[j]&=ar[i];
    int mx = *max_element(ar , ar + sz);
    cout << mx <<"\n";
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