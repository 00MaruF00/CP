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
    int n , x , limt , ans = 1;
    cin >> n >> x;
    limt = n/x;
    for(int i = 1 ; i <= sqrt(n); i++){
        if(n%i==0){
            if(i<=limt)ans = max(ans , i);
            if(n/i<=limt)ans = max(ans , n/i);
        }
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
    cin >> test;
    while(test--)
        solve(++cas);
    return 0;
}

