#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

void solve()
{
    int sz , ans = 1e9 + 1 , g = 0 , rough = 0;
    cin >> sz;
    int ar[sz + 1];
    for(int i = 1 ; i <= sz ; i++) cin >> ar[i] , g = __gcd(g , ar[i]);
    if(g == 1)ans = 0;
    for(int i = 1 ; i <= sz ; i++){
        g = __gcd(ar[i] , i);
        for(int j = 1 ; j <= sz ; j++){
            if(i != j) {
                g = __gcd(g , ar[j]);
            }
        }
        if(g == 1)ans  = min(ans , sz - i + 1);
    }
    for(int i = sz ; i >= 1 ; i--){
        ar[i] = __gcd(i , ar[i]) , g = 0;
        rough += (sz - i + 1);
        for(int j = 1 ; j <= sz ; j++)
            g = __gcd(g , ar[j]);
        if(g == 1)ans = min(ans , rough);
    }
    cout << ans <<"\n";
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