#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , counter = 0;
    cin >> sz;
    unordered_map<char , int>mp;
    for(int i = 0 ; i < sz ; i++){
        char ch;
        cin >> ch;
        mp[ch]++;
    }
    for(auto iter : mp) if(iter.second&1)counter++;
    if((mp.size() == 1 || mp.size() == 26) && counter == 1) cout << 2 <<"\n";
    else if(counter <= 1) cout << 1 <<"\n";
    else cout << 0 <<"\n";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>> test;
    while(test--)
        solve();
    return 0 ;
}