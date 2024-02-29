#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int sz , c = 0;
    cin >> sz;
    unordered_map<int , int>mp;
    int ar[sz] = {0};
    for(int i = 0 ; i < sz ; i++) {
        int a;
        cin >> a;
        if(!mp[a])ar[i] = a , mp[a] = 1;
    }
    sort(ar , ar + sz , greater<int>());
    cout << ar[0] + ar[1] <<"\n";

}

int main()
{
    int test;
    cin >> test;
    while(test--)
        solve();
    return 0;
}