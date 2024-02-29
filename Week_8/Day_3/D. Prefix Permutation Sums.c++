#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    ll sum = ((ll)n*(n + 1))/2;
    n--;
    ll ar[n];
    for(int i = 0 ; i < n ; i++) cin >> ar[i];
    sort(ar , ar + n);
    stack<ll>st;
    unordered_map<ll , int>mp;
    if(ar[n - 1] > sum)cout << "NO\n";
    else{
        if(sum != ar[n - 1]){
            int x = ar[n - 1];
            if(sum - x > n + 1)st.push(sum - x);
            else mp[sum - x] = 1;
        }
        for(int i = n - 1 ; i >= 1 ; i--){
            ll x = ar[i] - ar[i - 1];
            if(x > n+1 || mp[x] != 0) st.push(x);
            else mp[x] = 1;
        }
        if(ar[0] > n+1 || mp[ar[0]])st.push(ar[0]);
        mp[ar[0]] = 1;
        if(st.size() > 1)cout << "NO\n";
        else{
            for(int i = 1 ; i < n + 2 ; i++)if(!mp[i]){
                mp[i] = 1;
                mp[st.top() - i]++;
                break;
            }
            for(int i = 1 ; i < n + 2 ; i++){
                if(mp[i] != 1){
                    cout << "NO\n";
                    return;
                }
            }
            cout << "YES\n";
        }
    }
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