#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    int n = (sz * (sz - 1))/2;
    int ar[n];
    vector<int>v;
    for(int i = 0 ; i < n ; i++) cin >> ar[i];
    sort(ar , ar + n);
    for(int i = 0 ; i < n ; i++){
        v.push_back(ar[i]);
        int m = sz - v.size() ;
        while(m--)i++;
        i--;
    }
    if(v.size() != sz)v.push_back(v.back());
    for(int iter : v)cout << iter <<" ";
    cout << "\n";
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