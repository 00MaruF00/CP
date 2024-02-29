#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll sz,q;
    cin>>sz>>q;
    vector<ll>ar(sz);
    for(int i =0;i<sz;i++)
    {
        ll a;
        cin>>a;
        if(!i) ar[i] = a;
        else ar[i] = a+ar[i-1]; 
    }
    while(q--)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        ll low = l- 1, heigh =  r- 1;
        ll sum , ans;
        if(!low) sum = ar[heigh];
        else sum = ar[heigh] - ar[low-1]; 
        ans = ar[sz-1] - sum + k*(r-low);
        if(ans&1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';        
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    while(test--)
        solve();
    return 0;
}