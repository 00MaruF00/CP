#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , k , l;
    cin >> sz >> k >> l;
    priority_queue<int>pq;
    for(int i = 0 ;i < sz ; i++){
        int a , b;
        cin >> a >> b;
        if(b == l)
            pq.push(a);
    }
    if(pq.size() < k) {
        cout << -1 <<'\n';
        return;
    }
    ll sum = 0;
    while(k-- && !pq.empty()){
        sum += pq.top() ;
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