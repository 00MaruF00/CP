#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int sz , one = 0;
    map<int , int> m;
    unordered_map<int , int>mp;
    cin >> sz;
    for(int i = 0 ; i < sz ; i++){
        int a;
        cin >> a;
        m[a]++;
    }
    for(auto iter : m)
        for(int i = iter.first ; i <= sz ; i += iter.first)
            mp[i] += iter.second;
    int mx = 0;
    for(auto iter : mp)mx = max(mx , iter.second);
    cout << mx + one <<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while(test--)
    solve();
}