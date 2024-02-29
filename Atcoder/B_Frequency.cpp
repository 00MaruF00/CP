#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef long double ld;
template<typename T>using
ordered_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
#ifdef DeBuG
#include "Debug_template.h"
#else
#define HERE
#define debug(args...)
#endif


void solve(int cs)
{
    vector<pair<int , char>>v;
    string s;
    cin >> s;
    map<char , int>mp;
    for(auto iter : s)mp[iter]++;
    int mx = -1;
    char ch = 'Z';
    for(auto iter : mp){
        if(iter.second>mx)mx = iter.second , ch = iter.first;
        if(iter.second==mx){
            if(iter.first<ch)ch = iter.first;
        }
    }
    cout << ch << endl;
}

int32_t main()
{
  #ifndef DeBuG
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
  #endif
    int test = 1 , cas = 0;
    while(test--)
        solve(++cas);
    return 0;
}

