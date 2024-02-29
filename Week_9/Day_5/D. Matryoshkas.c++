#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    map<int , int>mp;
    cin>> sz;
    vector<int>v;
    for(int i = 0; i < sz ; i++){
        int a;
        cin >> a;
        mp[a]++;
        if(mp[a] == 1) v.push_back(a);
    }
    sort(v.begin() , v.end());
    int ans = mp[v[0]];
    for(int i = 1 ; i < v.size() ; i++)
        if(v[i] - v[i-1] == 1)
            ans += max(0 , mp[v[i]] - mp[v[i-1]]);
        else ans += mp[v[i]];
    cout << ans <<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>> test;
    while(test--)
        solve();
    return 0 ;
}