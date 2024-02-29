#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    bool ok = true;
    unordered_map<int , int>mp;
    for(int i = 0 ; i < sz ; i++){
        char ch;
        cin >> ch;
        if(i&1){
            if(mp[ch] == 2)
                ok = false;
            mp[ch] = 1;
        }
        else {
            if(mp[ch] == 1)
                ok = false;
            mp[ch] = 2;
        }
    }
    if(!ok) cout << "NO\n";
    else cout << "YES\n";
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