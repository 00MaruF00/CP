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
#define edl "\n"

void solve()
{
    ll n , x , ans = -1;
    cin >> n >> x;
    ll lo = n , hi = 5e18;
    while(lo<=hi){
        ll mid = lo + (hi - lo)/2LL , xx , yy , summation = 0 , midx , nx;
        midx = mid , nx = n;
        vector<int>v1,v2;
        while(midx){
            if(midx&1)v1.push_back(1);
            else v1.push_back(0);
            midx/=2;
        }
        while(nx){
            if(nx&1)v2.push_back(1);
            else v2.push_back(0);
            nx/=2;
        }
        if(v1.size() != v2.size()){
            if(x == 0)ans = mid ;
            hi = mid - 1;
            continue;
        }
        for(ll i = (ll)v1.size() - 1LL ; i>= 0 ; i--){
            if(v1[i]&&v1[i]==v2[i])summation += (1LL<<i);
            else if(v1[i]||v2[i]) break;
        }
        debug(summation);
        if(summation==x)ans = mid , hi = mid - 1;
        else if(summation<x)hi = mid - 1;
        else lo = mid + 1;
    }
    cout << ans << endl;
}

int32_t main()
{
  #ifndef DeBuG
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
  #endif
    int test = 1;
    cin >> test;
    while(test--)
        solve();
    return 0;
}

