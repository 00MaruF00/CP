#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int sz,coin;
    cin>>sz>>coin;
    vector<int>ar(sz);
    for(int i =0;i<sz;i++)
    {
        int a;
        cin>>a;
        ar[i] = (a+1)+i;
    }
    sort(ar.begin(),ar.end());
    int i =0,counter =0;
    while(coin>0 && i<sz)
    {
        coin -= ar[i];
        if(coin>=0)
            counter++;
        i++;
    }
    cout<<counter<<"\n";
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