#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    map<int , int>mp;
    for(int i = 0 ; i < sz ; i++){
        int a , b;
        cin >> a >> b;
        mp[a]++;
        mp[b+1]--;
    }
    int counter = 0;
    for(auto iter : mp){
        counter+=iter.second;
        if(counter > 2){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0 ;
}