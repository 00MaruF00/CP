#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , counter = 0;
    cin >> sz;
    string s;
    cin >> s;
    char ch = s[0];
    for(auto iter : s){
        if(ch == iter)counter++;
        else{
            if(counter&1)cout << ch ;
            else cout << ch << ch ;
            counter = 1;
            ch = iter;
        }
    }
    if(counter&1)cout << ch<<"\n";
    else cout << ch << ch<<"\n";
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