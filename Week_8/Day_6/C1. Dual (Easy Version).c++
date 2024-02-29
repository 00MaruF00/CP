#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , neg = 0 , pos = 0;
    cin >> sz;
    vector<int>ar(sz + 1);
    for(int i = 1 ; i <= sz ; i++){
        cin >> ar[i];
        if(ar[i] < 0)neg++;
        else pos++;
    }
     if(!neg){
        cout << sz-1 <<'\n';
        for(int i = 2 ; i <= sz ; i++)
            cout << i <<" "<< i - 1 <<"\n";
     }
     else if(!pos){
        cout << sz - 1 <<'\n';
        for(int i = sz - 1 ; i >= 1 ; i--)
            cout << i <<" "<<i + 1 <<"\n";
     }
     else {
        auto mx = max_element(ar.begin() + 1 , ar.end());
        auto mn = min_element(ar.begin() + 1 , ar.end());
        int mx_idx = mx - ar.begin() , mn_idx = mn - ar.begin();
        vector<pair<int , int>>v;
        if(abs(*mx) > abs(*mn)){
            for(int i = 1 ; i <= sz ; i++)
                while(ar[i] < 0)ar[i] += *mx , v.push_back({i , mx_idx});
            cout << sz - 1 + v.size() <<"\n";
            for(auto iter : v)cout << iter.first <<" "<<iter.second <<'\n';
            for(int i = 2 ; i <= sz ; i++)cout << i <<" "<< i - 1 <<"\n";
        }
        else{
            for(int i = 1 ; i <= sz ; i++)
                while(ar[i] > 0)ar[i] += *mn , v.push_back({i , mn_idx});
            cout << v.size() + sz - 1 <<'\n';
            for(auto iter : v)cout << iter.first <<" "<<iter.second <<'\n';
            for(int i = sz - 1 ; i >= 1 ; i--)cout << i <<" "<< i+1 <<"\n";
        }
     }
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