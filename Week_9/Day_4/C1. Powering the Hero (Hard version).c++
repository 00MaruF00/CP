#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    priority_queue<ll>pq;
    ll sum = 0;
    for(int i = 0 ; i < sz ; i++){
        ll a;
        cin >> a;
        pq.push(a);
        if(!a) sum += pq.top() , pq.pop();
    }
    cout << sum <<'\n';
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