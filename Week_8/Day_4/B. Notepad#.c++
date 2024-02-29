#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    string s;
    cin >> s;
    unordered_map<string , int>mp;
    for(int i = 0 ; sz - i >=2 ; i++){
        string s1;
        s1 += s[i];
        s1 += s[i + 1];
        if(s[i] == s[i+1]){
            if(i + 2 < sz && s[i] == s[i + 2]) i++;
        }
        mp[s1]++;
    }
    for(auto iter : mp)if(iter.second >= 2){
        cout << "YES\n" ;
        return;
    }
    cout << "NO\n";
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