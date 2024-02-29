#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

ll digit_count(ll num)
{
    if(!num) return 0;
    return num%10 + digit_count(num/10);
}

void solve()
{
    ll n , k , ans;
    cin >> n >> k;
    ans = n;
    ll l = 1 , r = n;
    while(l <= r){
        ll mid = r - (r - l)/2;
        ll x = mid - digit_count(mid);
        if(x >= k) ans = mid -  1, r = mid - 1;
        else l = mid + 1;
    }
    cout << n - ans <<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0 ;
}