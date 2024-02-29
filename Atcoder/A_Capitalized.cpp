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
    string s;
    cin >> s;
    if(s[0]>='A'&&s[0]<='Z'){
        for(int i = 1 ; i < s.size() ; i++){
            if(s[i]>='A'&&s[i]<='Z'){
                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
    }
    else cout << "No\n";
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

