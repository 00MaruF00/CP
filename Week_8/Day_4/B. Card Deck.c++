#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin>> sz;
    int ar[sz] , val = sz;
    unordered_map<int  , int>mp;
    mp[val] = -1;
    vector<int>v;
    for(int i = 0 ; i < sz ; i++)cin >> ar[i];
    for(int i = sz - 1; i >= 0 ; i--){
        if(val == ar[i]){
            cout << val <<" ";
            mp[val] = -1;
            for(int j = v.size() -1 ; j >= 0 ; j--)cout << v[j] <<" ";
            v.clear();
            for(int j = val ; j >= 1 ; j--)if(mp[j]!=-1){
                mp[j] = -1;
                val = j;
                break;
            }
        }
        else v.push_back(ar[i]) , mp[ar[i]] = -1;
    }
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