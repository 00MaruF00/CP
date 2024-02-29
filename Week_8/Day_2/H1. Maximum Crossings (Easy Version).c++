#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

void solve()
{
    int sz , ans = 0;
    cin >> sz;
    orderded_set<pair<int , int>>st;
    unordered_map<int , int>mp;
    for(int i = 1 ; i <= sz ; i++){
        int a;
        cin >> a;
        mp[a]++;
        st.insert({a , mp[a]});
        ans += (st.size() - 1 - st.order_of_key({a , 1}));
    }
    cout << ans <<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while(test--)
        solve();
    return 0;
}