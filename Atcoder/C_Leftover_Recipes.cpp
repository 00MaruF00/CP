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
    ll sz , ans = 0;
    cin >> sz;
    vector<ll>ind(sz),A(sz),B(sz);
    for(int i = 0 ; i < sz ; i++) cin >> ind[i];
    for(int i = 0 ; i < sz ; i++) cin >> A[i];
    for(int i = 0 ; i < sz ; i++) cin >> B[i];
    ll f = 0 , l = 10000000;
    while(f<=l){
        ll mid = (f+l)/2LL , ache = 0;
        for(ll i = 0 ; i <= mid ; i++){
            ll a = i , b = mid - i , paice = 1;
            for(ll j = 0 ; j < sz ; j++){
                if((ll)((ll)a*(ll)A[j]+(ll)b*(ll)B[j])>(ll)ind[j]){
                    paice = 0;
                    break;
                }
            }
            if(paice){
                ache=1;
                break;
            }
        }
        if(ache)ans = mid , f = mid  + 1;
        else l = mid - 1;
    }
    cout << ans << endl;
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

