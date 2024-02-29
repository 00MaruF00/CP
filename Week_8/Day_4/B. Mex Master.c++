#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , counter = 0 , one = 0;
    cin >> sz;
    int zero = ceil((float)sz / 2);
    for(int i = 0 ; i < sz ; i++){
        int a; 
        cin >> a;
        if(!a)counter++;
        else if(a == 1)one++;
    }
    if(counter > zero){
        if(counter + one == sz && one)cout << 2 <<'\n';
        else cout << 1 <<"\n";
    }
    else cout << 0 <<'\n';
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