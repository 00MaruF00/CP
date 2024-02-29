#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , m;
    cin >> sz >> m;
    ll sum = 0;
    priority_queue<ll , vector<ll> , greater<ll>>pq;
    for(int i = 0 ; i < sz ; i++){
        int a;
        cin >> a;
        pq.push(a);
    }
    for(int i = 0 ; i < m ; i++){
        int a;
        cin >> a;
        pq.pop();
        pq.push(a);
    }
    while(!pq.empty()){
        sum += pq.top();
        pq.pop();
    }
    cout << sum <<"\n";
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