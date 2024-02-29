#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , q;
    priority_queue<int>pq1 , pq2;
    cin >> sz >> q;
    int dif[sz + 2] = {0};
    for(int i = 0 ; i < sz ; i++) {
        int a;
        cin >> a;
        pq1.push(a);
    }
    while(q--){
        int a , b;
        cin >> a >> b;
        dif[a]++;
        dif[b + 1]--;
    }
    for(int i = 1 ; i <= sz ; i++)dif[i] = dif[i] + dif[i - 1];
    ll sum = 0;
    for(int i = 1 ; i <= sz ; i++){
        if(!dif[i])continue;
        pq2.push(dif[i]);
    }
    while(!pq2.empty()){
        int m = pq1.top() , n = pq2.top();
        sum += (ll)m*n;
        pq1.pop() , pq2.pop();
    }
    cout << sum <<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0 ;
}