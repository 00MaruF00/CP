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
    ll sz , m , present = -1 , cost = 0;
    cin >> sz >> m;
    vector<ll>ar(m);
    for(int i = 0 ; i < m ; i++) cin >> ar[i];
    for(int i = 0 ; i < m ; i++){
        ll a = ar[i];
        if(present==-1)present = a;
        if(present>a){
            cost += (sz - present + a);
        }
        else {
            cost += abs(present-a);
        }
        present = a;
    }
    cout << cost << endl;
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

