//https://atcoder.jp/contests/abc297/tasks/abc297_e
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef long double ld;
template<typename T>using
ordered_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;

void solve()
{
    ll sz , k , ans;
    cin >> sz >> k;
    ll ar[sz];
    set<ll>st;
    for(int i = 0 ; i < sz ; i++){
        cin >> ar[i] , st.insert(ar[i]);
    }
    while(k--){
        ans = *st.begin();
        st.erase(st.begin());
        for(int i = 0 ; i < sz ; i++){
            st.insert(ans + ar[i]);
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 1;
    while(test--)
        solve();
    return 0;
}

