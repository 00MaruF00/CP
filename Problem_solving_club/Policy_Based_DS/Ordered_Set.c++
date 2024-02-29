#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

int main()
{
    orderded_set<int>st;
    st.insert(5);
    st.insert(2);
    st.insert(1);
    st.insert(5);
    st.insert(6);
    st.insert(7);
    st.insert(7);
    for(int iter : st)cout << iter << " ";
    cout<<"\n";
    cout << st.order_of_key(5) <<"\n";// How many value are in the set stricly less than 5.
    cout << *st.find_by_order(2) <<"\n";// Which value is exist in the 2nd index
}
