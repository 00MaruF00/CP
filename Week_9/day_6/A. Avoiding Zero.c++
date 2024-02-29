#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , sum = 0;
    vector<int>v1 , v2;
    cin >> sz;
    for(int i = 0 ; i < sz ; i++){
        int a;
        cin >> a;
        if(a)v1.push_back(a);
        else v2.push_back(a);
        sum += a;
    }
    
    if(sum){
        if(sum > 0)sort(v1.begin() , v1.end() , greater<int>());
        else sort(v1.begin() , v1.end());
        cout << "YES\n";
        for(auto iter : v1)cout << iter <<" ";
        for(auto iter : v2) cout << iter <<" ";
        cout << "\n";
    }
    else cout << "NO\n";
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