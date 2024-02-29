#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int sz;
    cin >>sz;
    if(sz&1) for(int i = 1 ; i <= sz ; i++) cout << i <<" ";
    else for(int i = 2 ; i <= 2*sz ; i+=2) cout << i << " ";
    cout <<"\n";
}

int main()
{
    int test;
    cin >> test;
    while(test--)
        solve();
}