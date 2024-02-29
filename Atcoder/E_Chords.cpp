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

class comp{
    public:
        bool operator()(const pair<int , int >&p1 , const pair<int , int>&p2){
            return p1.second>p2.second;
        }
};

void solve(int cs)
{
    int sz;
    cin >> sz;
    vector<pair<int , int>>ar(sz);
    priority_queue<pair<int , int> ,vector<pair<int , int>>, comp>pq;
    for(int i = 0 ; i < sz ; i++){
        int a, b;
        cin >>a >> b;
        ar[i].first=min(a,b);
        ar[i].second=max(a,b);
    }
    // while(!pq.empty()){
    //     cout << pq.top().first << " " << pq.top().second<<endl;
    //     pq.pop();
    // }
    sort(ar.begin() , ar.end());
    for(int i = 0; i <sz ; i++){
        while(!pq.empty() && pq.top().second<ar[i].first)pq.pop();
        if(!pq.empty()){
            if(pq.top().second<ar[i].second){
                cout << "Yes\n";
                return;
            }
        }
        pq.push(ar[i]);
    }
    cout << "No\n";
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

