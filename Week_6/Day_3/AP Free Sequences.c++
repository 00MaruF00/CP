#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz ;
    cin >> sz;
    int ar[sz] ;
    unordered_map<int , int>mp;
    for(int i = 0 ; i < sz; i++)cin >> ar[i] , mp[ar[i]] = i;
    for(int i = 0 ; i < sz ; i++){
        for(int j = i + 1 ; j < sz ; j++){
            int x = ar[j] - ar[i];
            if(mp[ar[j] + x] > j){
                cout << "No\n";
                return;
            }
        }
    }
    cout << "Yes\n";
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